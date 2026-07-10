/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StreamingConfiguration::StreamingConfiguration(JsonView jsonValue) { *this = jsonValue; }

StreamingConfiguration& StreamingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableResponseStreaming")) {
    m_enableResponseStreaming = jsonValue.GetBool("enableResponseStreaming");
    m_enableResponseStreamingHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enableResponseStreamingHasBeenSet) {
    payload.WithBool("enableResponseStreaming", m_enableResponseStreaming);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
