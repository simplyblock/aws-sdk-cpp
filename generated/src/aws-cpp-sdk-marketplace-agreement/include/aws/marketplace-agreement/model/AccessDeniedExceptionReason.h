/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class AccessDeniedExceptionReason {
  NOT_SET,
  INVALID_ACCOUNT_STATE,
  DENIED_BY_PRIVATE_MARKETPLACE_POLICY,
  FAILED_KYC_COMPLIANCE,
  MISSING_MFA,
  INVALID_ACCESS
};

namespace AccessDeniedExceptionReasonMapper {
AWS_AGREEMENTSERVICE_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
