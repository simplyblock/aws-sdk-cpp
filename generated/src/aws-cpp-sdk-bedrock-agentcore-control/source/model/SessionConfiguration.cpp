/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SessionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

SessionConfiguration::SessionConfiguration(JsonView jsonValue) { *this = jsonValue; }

SessionConfiguration& SessionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sessionTimeoutInSeconds")) {
    m_sessionTimeoutInSeconds = jsonValue.GetInteger("sessionTimeoutInSeconds");
    m_sessionTimeoutInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sessionTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("sessionTimeoutInSeconds", m_sessionTimeoutInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
