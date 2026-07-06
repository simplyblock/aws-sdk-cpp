/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
 * <p>Contains information about the action to take for a policy in an unused
 * permissions finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UnusedPermissionsRecommendationStep">AWS
 * API Reference</a></p>
 */
class UnusedPermissionsRecommendationStep {
 public:
  AWS_SECURITYHUB_API UnusedPermissionsRecommendationStep() = default;
  AWS_SECURITYHUB_API UnusedPermissionsRecommendationStep(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API UnusedPermissionsRecommendationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A recommendation of whether to create or detach a policy for an unused
   * permissions finding.</p>
   */
  inline const Aws::String& GetRecommendedAction() const { return m_recommendedAction; }
  inline bool RecommendedActionHasBeenSet() const { return m_recommendedActionHasBeenSet; }
  template <typename RecommendedActionT = Aws::String>
  void SetRecommendedAction(RecommendedActionT&& value) {
    m_recommendedActionHasBeenSet = true;
    m_recommendedAction = std::forward<RecommendedActionT>(value);
  }
  template <typename RecommendedActionT = Aws::String>
  UnusedPermissionsRecommendationStep& WithRecommendedAction(RecommendedActionT&& value) {
    SetRecommendedAction(std::forward<RecommendedActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contents of the existing policy identified by
   * <code>ExistingPolicyId</code> which needs to be replaced, when the
   * <code>RecommendedAction</code> is <code>CREATE_POLICY</code>.</p>
   */
  inline const Aws::String& GetExistingPolicy() const { return m_existingPolicy; }
  inline bool ExistingPolicyHasBeenSet() const { return m_existingPolicyHasBeenSet; }
  template <typename ExistingPolicyT = Aws::String>
  void SetExistingPolicy(ExistingPolicyT&& value) {
    m_existingPolicyHasBeenSet = true;
    m_existingPolicy = std::forward<ExistingPolicyT>(value);
  }
  template <typename ExistingPolicyT = Aws::String>
  UnusedPermissionsRecommendationStep& WithExistingPolicy(ExistingPolicyT&& value) {
    SetExistingPolicy(std::forward<ExistingPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of an existing policy to be replaced or detached.</p>
   */
  inline const Aws::String& GetExistingPolicyId() const { return m_existingPolicyId; }
  inline bool ExistingPolicyIdHasBeenSet() const { return m_existingPolicyIdHasBeenSet; }
  template <typename ExistingPolicyIdT = Aws::String>
  void SetExistingPolicyId(ExistingPolicyIdT&& value) {
    m_existingPolicyIdHasBeenSet = true;
    m_existingPolicyId = std::forward<ExistingPolicyIdT>(value);
  }
  template <typename ExistingPolicyIdT = Aws::String>
  UnusedPermissionsRecommendationStep& WithExistingPolicyId(ExistingPolicyIdT&& value) {
    SetExistingPolicyId(std::forward<ExistingPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the existing policy for the unused permissions finding was
   * last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetPolicyUpdatedAt() const { return m_policyUpdatedAt; }
  inline bool PolicyUpdatedAtHasBeenSet() const { return m_policyUpdatedAtHasBeenSet; }
  template <typename PolicyUpdatedAtT = Aws::Utils::DateTime>
  void SetPolicyUpdatedAt(PolicyUpdatedAtT&& value) {
    m_policyUpdatedAtHasBeenSet = true;
    m_policyUpdatedAt = std::forward<PolicyUpdatedAtT>(value);
  }
  template <typename PolicyUpdatedAtT = Aws::Utils::DateTime>
  UnusedPermissionsRecommendationStep& WithPolicyUpdatedAt(PolicyUpdatedAtT&& value) {
    SetPolicyUpdatedAt(std::forward<PolicyUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contents of the least-privileged recommended replacement for
   * <code>ExistingPolicyId</code>, when the <code>RecommendedAction</code> is
   * <code>CREATE_POLICY</code>.</p>
   */
  inline const Aws::String& GetRecommendedPolicy() const { return m_recommendedPolicy; }
  inline bool RecommendedPolicyHasBeenSet() const { return m_recommendedPolicyHasBeenSet; }
  template <typename RecommendedPolicyT = Aws::String>
  void SetRecommendedPolicy(RecommendedPolicyT&& value) {
    m_recommendedPolicyHasBeenSet = true;
    m_recommendedPolicy = std::forward<RecommendedPolicyT>(value);
  }
  template <typename RecommendedPolicyT = Aws::String>
  UnusedPermissionsRecommendationStep& WithRecommendedPolicy(RecommendedPolicyT&& value) {
    SetRecommendedPolicy(std::forward<RecommendedPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendedAction;

  Aws::String m_existingPolicy;

  Aws::String m_existingPolicyId;

  Aws::Utils::DateTime m_policyUpdatedAt{};

  Aws::String m_recommendedPolicy;
  bool m_recommendedActionHasBeenSet = false;
  bool m_existingPolicyHasBeenSet = false;
  bool m_existingPolicyIdHasBeenSet = false;
  bool m_policyUpdatedAtHasBeenSet = false;
  bool m_recommendedPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
