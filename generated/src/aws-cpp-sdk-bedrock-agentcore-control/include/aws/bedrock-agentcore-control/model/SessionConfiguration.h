/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>The session configuration for an MCP gateway. This structure defines settings
 * that control session behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SessionConfiguration">AWS
 * API Reference</a></p>
 */
class SessionConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SessionConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The session timeout in seconds. After this timeout, the session expires and
   * subsequent requests to this session will receive an error. The minimum value is
   * 900 seconds (15 minutes), the maximum value is 28800 seconds (8 hours), and the
   * default value is 3600 seconds (1 hour).</p>
   */
  inline int GetSessionTimeoutInSeconds() const { return m_sessionTimeoutInSeconds; }
  inline bool SessionTimeoutInSecondsHasBeenSet() const { return m_sessionTimeoutInSecondsHasBeenSet; }
  inline void SetSessionTimeoutInSeconds(int value) {
    m_sessionTimeoutInSecondsHasBeenSet = true;
    m_sessionTimeoutInSeconds = value;
  }
  inline SessionConfiguration& WithSessionTimeoutInSeconds(int value) {
    SetSessionTimeoutInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_sessionTimeoutInSeconds{0};
  bool m_sessionTimeoutInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
