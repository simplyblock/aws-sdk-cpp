/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AccessDeniedExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AccessDeniedExceptionReasonMapper {

static const int INVALID_ACCOUNT_STATE_HASH = HashingUtils::HashString("INVALID_ACCOUNT_STATE");
static const int DENIED_BY_PRIVATE_MARKETPLACE_POLICY_HASH = HashingUtils::HashString("DENIED_BY_PRIVATE_MARKETPLACE_POLICY");
static const int FAILED_KYC_COMPLIANCE_HASH = HashingUtils::HashString("FAILED_KYC_COMPLIANCE");
static const int MISSING_MFA_HASH = HashingUtils::HashString("MISSING_MFA");
static const int INVALID_ACCESS_HASH = HashingUtils::HashString("INVALID_ACCESS");

AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_ACCOUNT_STATE_HASH) {
    return AccessDeniedExceptionReason::INVALID_ACCOUNT_STATE;
  } else if (hashCode == DENIED_BY_PRIVATE_MARKETPLACE_POLICY_HASH) {
    return AccessDeniedExceptionReason::DENIED_BY_PRIVATE_MARKETPLACE_POLICY;
  } else if (hashCode == FAILED_KYC_COMPLIANCE_HASH) {
    return AccessDeniedExceptionReason::FAILED_KYC_COMPLIANCE;
  } else if (hashCode == MISSING_MFA_HASH) {
    return AccessDeniedExceptionReason::MISSING_MFA;
  } else if (hashCode == INVALID_ACCESS_HASH) {
    return AccessDeniedExceptionReason::INVALID_ACCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessDeniedExceptionReason>(hashCode);
  }

  return AccessDeniedExceptionReason::NOT_SET;
}

Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason enumValue) {
  switch (enumValue) {
    case AccessDeniedExceptionReason::NOT_SET:
      return {};
    case AccessDeniedExceptionReason::INVALID_ACCOUNT_STATE:
      return "INVALID_ACCOUNT_STATE";
    case AccessDeniedExceptionReason::DENIED_BY_PRIVATE_MARKETPLACE_POLICY:
      return "DENIED_BY_PRIVATE_MARKETPLACE_POLICY";
    case AccessDeniedExceptionReason::FAILED_KYC_COMPLIANCE:
      return "FAILED_KYC_COMPLIANCE";
    case AccessDeniedExceptionReason::MISSING_MFA:
      return "MISSING_MFA";
    case AccessDeniedExceptionReason::INVALID_ACCESS:
      return "INVALID_ACCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
