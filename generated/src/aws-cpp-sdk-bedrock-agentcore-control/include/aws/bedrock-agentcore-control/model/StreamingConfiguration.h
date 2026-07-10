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
 * <p>The streaming configuration for an MCP gateway. This structure defines
 * settings that control response streaming behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StreamingConfiguration">AWS
 * API Reference</a></p>
 */
class StreamingConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StreamingConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether response streaming is enabled for the gateway. When set to
   * <code>true</code>, the gateway streams responses from targets back to the
   * client.</p>
   */
  inline bool GetEnableResponseStreaming() const { return m_enableResponseStreaming; }
  inline bool EnableResponseStreamingHasBeenSet() const { return m_enableResponseStreamingHasBeenSet; }
  inline void SetEnableResponseStreaming(bool value) {
    m_enableResponseStreamingHasBeenSet = true;
    m_enableResponseStreaming = value;
  }
  inline StreamingConfiguration& WithEnableResponseStreaming(bool value) {
    SetEnableResponseStreaming(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableResponseStreaming{false};
  bool m_enableResponseStreamingHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
