/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/threading/ThreadTask.h>
#include <aws/core/utils/threading/PooledThreadExecutor.h>
#include <aws/crt/pthread_utils.h>

using namespace Aws::Utils;
using namespace Aws::Utils::Threading;

ThreadTask::ThreadTask(PooledThreadExecutor& executor, cpu_set_t* pset) : m_continue(true), m_executor(executor), m_thread(std::bind(&ThreadTask::MainTaskRunner, this))
{
    if (pset) { util_set_thread_affinity(m_thread.native_handle(), pset); }
}

ThreadTask::~ThreadTask()
{
    StopProcessingWork();
    if (!m_detached) {
      m_thread.join();
    } else {
      m_thread.detach();
    }
}

void ThreadTask::MainTaskRunner()
{
    while (m_continue)
    {        
        while (m_continue && m_executor.HasTasks())
        {      
            auto fn = m_executor.PopTask();
            if(fn)
            {
                (*fn)();
                Aws::Delete(fn);               
            }
        }
     
        if(m_continue)
        {
            m_executor.m_sync.WaitOne();
        }
    }

    if (m_detached) {
      Aws::Delete(this);
    }
}

void ThreadTask::StopProcessingWork()
{
    m_continue = false;
}

std::thread::id ThreadTask::GetThreadId() const {
  return m_thread.get_id();
}

void ThreadTask::DetachFromExecutor() {
  m_detached = true;
}

