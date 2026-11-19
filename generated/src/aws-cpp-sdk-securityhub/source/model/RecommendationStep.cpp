/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RecommendationStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RecommendationStep::RecommendationStep(JsonView jsonValue) { *this = jsonValue; }

RecommendationStep& RecommendationStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("UnusedPermissions")) {
    m_unusedPermissions = jsonValue.GetObject("UnusedPermissions");
    m_unusedPermissionsHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendationStep::Jsonize() const {
  JsonValue payload;

  if (m_unusedPermissionsHasBeenSet) {
    payload.WithObject("UnusedPermissions", m_unusedPermissions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
