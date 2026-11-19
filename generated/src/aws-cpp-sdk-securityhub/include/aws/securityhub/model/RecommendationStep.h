/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/UnusedPermissionsRecommendationStep.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Contains information about a recommended step to remediate a Security Hub
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RecommendationStep">AWS
 * API Reference</a></p>
 */
class RecommendationStep {
 public:
  AWS_SECURITYHUB_API RecommendationStep() = default;
  AWS_SECURITYHUB_API RecommendationStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RecommendationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A recommended step to remediate an unused permissions finding.</p>
   */
  inline const UnusedPermissionsRecommendationStep& GetUnusedPermissions() const { return m_unusedPermissions; }
  inline bool UnusedPermissionsHasBeenSet() const { return m_unusedPermissionsHasBeenSet; }
  template <typename UnusedPermissionsT = UnusedPermissionsRecommendationStep>
  void SetUnusedPermissions(UnusedPermissionsT&& value) {
    m_unusedPermissionsHasBeenSet = true;
    m_unusedPermissions = std::forward<UnusedPermissionsT>(value);
  }
  template <typename UnusedPermissionsT = UnusedPermissionsRecommendationStep>
  RecommendationStep& WithUnusedPermissions(UnusedPermissionsT&& value) {
    SetUnusedPermissions(std::forward<UnusedPermissionsT>(value));
    return *this;
  }
  ///@}
 private:
  UnusedPermissionsRecommendationStep m_unusedPermissions;
  bool m_unusedPermissionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
