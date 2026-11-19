/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/UnusedPermissionsRecommendationStep.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

UnusedPermissionsRecommendationStep::UnusedPermissionsRecommendationStep(JsonView jsonValue) { *this = jsonValue; }

UnusedPermissionsRecommendationStep& UnusedPermissionsRecommendationStep::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecommendedAction")) {
    m_recommendedAction = jsonValue.GetString("RecommendedAction");
    m_recommendedActionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExistingPolicy")) {
    m_existingPolicy = jsonValue.GetString("ExistingPolicy");
    m_existingPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExistingPolicyId")) {
    m_existingPolicyId = jsonValue.GetString("ExistingPolicyId");
    m_existingPolicyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PolicyUpdatedAt")) {
    m_policyUpdatedAt = jsonValue.GetString("PolicyUpdatedAt");
    m_policyUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommendedPolicy")) {
    m_recommendedPolicy = jsonValue.GetString("RecommendedPolicy");
    m_recommendedPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue UnusedPermissionsRecommendationStep::Jsonize() const {
  JsonValue payload;

  if (m_recommendedActionHasBeenSet) {
    payload.WithString("RecommendedAction", m_recommendedAction);
  }

  if (m_existingPolicyHasBeenSet) {
    payload.WithString("ExistingPolicy", m_existingPolicy);
  }

  if (m_existingPolicyIdHasBeenSet) {
    payload.WithString("ExistingPolicyId", m_existingPolicyId);
  }

  if (m_policyUpdatedAtHasBeenSet) {
    payload.WithString("PolicyUpdatedAt", m_policyUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_recommendedPolicyHasBeenSet) {
    payload.WithString("RecommendedPolicy", m_recommendedPolicy);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
