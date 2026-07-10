/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EfsAccessPointConfiguration.h>
#include <aws/bedrock-agentcore-control/model/S3FilesAccessPointConfiguration.h>
#include <aws/bedrock-agentcore-control/model/SessionStorageConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for a filesystem that can be mounted into the AgentCore
 * Runtime.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/FilesystemConfiguration">AWS
 * API Reference</a></p>
 */
class FilesystemConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API FilesystemConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API FilesystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API FilesystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for session storage. Session storage provides persistent
   * storage that is preserved across AgentCore Runtime session invocations.</p>
   */
  inline const SessionStorageConfiguration& GetSessionStorage() const { return m_sessionStorage; }
  inline bool SessionStorageHasBeenSet() const { return m_sessionStorageHasBeenSet; }
  template <typename SessionStorageT = SessionStorageConfiguration>
  void SetSessionStorage(SessionStorageT&& value) {
    m_sessionStorageHasBeenSet = true;
    m_sessionStorage = std::forward<SessionStorageT>(value);
  }
  template <typename SessionStorageT = SessionStorageConfiguration>
  FilesystemConfiguration& WithSessionStorage(SessionStorageT&& value) {
    SetSessionStorage(std::forward<SessionStorageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for an Amazon S3 Files access point to mount into the AgentCore
   * Runtime.</p>
   */
  inline const S3FilesAccessPointConfiguration& GetS3FilesAccessPoint() const { return m_s3FilesAccessPoint; }
  inline bool S3FilesAccessPointHasBeenSet() const { return m_s3FilesAccessPointHasBeenSet; }
  template <typename S3FilesAccessPointT = S3FilesAccessPointConfiguration>
  void SetS3FilesAccessPoint(S3FilesAccessPointT&& value) {
    m_s3FilesAccessPointHasBeenSet = true;
    m_s3FilesAccessPoint = std::forward<S3FilesAccessPointT>(value);
  }
  template <typename S3FilesAccessPointT = S3FilesAccessPointConfiguration>
  FilesystemConfiguration& WithS3FilesAccessPoint(S3FilesAccessPointT&& value) {
    SetS3FilesAccessPoint(std::forward<S3FilesAccessPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for an Amazon EFS access point to mount into the AgentCore
   * Runtime.</p>
   */
  inline const EfsAccessPointConfiguration& GetEfsAccessPoint() const { return m_efsAccessPoint; }
  inline bool EfsAccessPointHasBeenSet() const { return m_efsAccessPointHasBeenSet; }
  template <typename EfsAccessPointT = EfsAccessPointConfiguration>
  void SetEfsAccessPoint(EfsAccessPointT&& value) {
    m_efsAccessPointHasBeenSet = true;
    m_efsAccessPoint = std::forward<EfsAccessPointT>(value);
  }
  template <typename EfsAccessPointT = EfsAccessPointConfiguration>
  FilesystemConfiguration& WithEfsAccessPoint(EfsAccessPointT&& value) {
    SetEfsAccessPoint(std::forward<EfsAccessPointT>(value));
    return *this;
  }
  ///@}
 private:
  SessionStorageConfiguration m_sessionStorage;

  S3FilesAccessPointConfiguration m_s3FilesAccessPoint;

  EfsAccessPointConfiguration m_efsAccessPoint;
  bool m_sessionStorageHasBeenSet = false;
  bool m_s3FilesAccessPointHasBeenSet = false;
  bool m_efsAccessPointHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
