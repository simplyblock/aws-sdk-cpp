/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/FunctionRef.h>
#include <aws/mediatailor/model/RuntimeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The configuration for a <code>SEQUENTIAL_EXECUTOR</code> function. A
 * <code>SEQUENTIAL_EXECUTOR</code> runs a sequence of child functions in order,
 * passing data between steps through temporary data. For more information, see <a
 * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions-types-sequential-executor.html">SEQUENTIAL_EXECUTOR</a>
 * in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SequentialExecutorConfiguration">AWS
 * API Reference</a></p>
 */
class SequentialExecutorConfiguration {
 public:
  AWS_MEDIATAILOR_API SequentialExecutorConfiguration() = default;
  AWS_MEDIATAILOR_API SequentialExecutorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API SequentialExecutorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expression language used to evaluate expressions in the function
   * configuration. Set this to <code>JSONata</code>.</p>
   */
  inline RuntimeType GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  inline void SetRuntime(RuntimeType value) {
    m_runtimeHasBeenSet = true;
    m_runtime = value;
  }
  inline SequentialExecutorConfiguration& WithRuntime(RuntimeType value) {
    SetRuntime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional map of output bindings that controls which bindings the sequence
   * commits to the session state after all steps complete. If omitted, MediaTailor
   * commits all accumulated output bindings from all child steps.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOutput() const { return m_output; }
  inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  void SetOutput(OutputT&& value) {
    m_outputHasBeenSet = true;
    m_output = std::forward<OutputT>(value);
  }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  SequentialExecutorConfiguration& WithOutput(OutputT&& value) {
    SetOutput(std::forward<OutputT>(value));
    return *this;
  }
  template <typename OutputKeyT = Aws::String, typename OutputValueT = Aws::String>
  SequentialExecutorConfiguration& AddOutput(OutputKeyT&& key, OutputValueT&& value) {
    m_outputHasBeenSet = true;
    m_output.emplace(std::forward<OutputKeyT>(key), std::forward<OutputValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ordered list of 1 to 10 steps. Each step specifies a child function to
   * execute and an optional run condition expression that controls whether the step
   * runs. MediaTailor executes steps in order, passing data between steps through
   * temporary data.</p>
   */
  inline const Aws::Vector<FunctionRef>& GetFunctionList() const { return m_functionList; }
  inline bool FunctionListHasBeenSet() const { return m_functionListHasBeenSet; }
  template <typename FunctionListT = Aws::Vector<FunctionRef>>
  void SetFunctionList(FunctionListT&& value) {
    m_functionListHasBeenSet = true;
    m_functionList = std::forward<FunctionListT>(value);
  }
  template <typename FunctionListT = Aws::Vector<FunctionRef>>
  SequentialExecutorConfiguration& WithFunctionList(FunctionListT&& value) {
    SetFunctionList(std::forward<FunctionListT>(value));
    return *this;
  }
  template <typename FunctionListT = FunctionRef>
  SequentialExecutorConfiguration& AddFunctionList(FunctionListT&& value) {
    m_functionListHasBeenSet = true;
    m_functionList.emplace_back(std::forward<FunctionListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in milliseconds, for the entire sequence to complete. This
   * timeout covers all steps, including any HTTP calls made by child functions. If
   * the sequence exceeds this timeout, MediaTailor discards all output from the
   * sequence and proceeds with default behavior.</p>
   */
  inline int GetTimeoutMilliseconds() const { return m_timeoutMilliseconds; }
  inline bool TimeoutMillisecondsHasBeenSet() const { return m_timeoutMillisecondsHasBeenSet; }
  inline void SetTimeoutMilliseconds(int value) {
    m_timeoutMillisecondsHasBeenSet = true;
    m_timeoutMilliseconds = value;
  }
  inline SequentialExecutorConfiguration& WithTimeoutMilliseconds(int value) {
    SetTimeoutMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  RuntimeType m_runtime{RuntimeType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_output;

  Aws::Vector<FunctionRef> m_functionList;

  int m_timeoutMilliseconds{0};
  bool m_runtimeHasBeenSet = false;
  bool m_outputHasBeenSet = false;
  bool m_functionListHasBeenSet = false;
  bool m_timeoutMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
