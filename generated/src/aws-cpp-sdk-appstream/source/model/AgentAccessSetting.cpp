/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AgentAccessSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

AgentAccessSetting::AgentAccessSetting(JsonView jsonValue) { *this = jsonValue; }

AgentAccessSetting& AgentAccessSetting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AgentAction")) {
    m_agentAction = AgentActionMapper::GetAgentActionForName(jsonValue.GetString("AgentAction"));
    m_agentActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Permission")) {
    m_permission = PermissionMapper::GetPermissionForName(jsonValue.GetString("Permission"));
    m_permissionHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentAccessSetting::Jsonize() const {
  JsonValue payload;

  if (m_agentActionHasBeenSet) {
    payload.WithString("AgentAction", AgentActionMapper::GetNameForAgentAction(m_agentAction));
  }

  if (m_permissionHasBeenSet) {
    payload.WithString("Permission", PermissionMapper::GetNameForPermission(m_permission));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
