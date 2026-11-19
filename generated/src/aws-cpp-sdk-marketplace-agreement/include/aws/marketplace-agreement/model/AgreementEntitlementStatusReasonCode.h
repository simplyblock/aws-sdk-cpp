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
enum class AgreementEntitlementStatusReasonCode {
  NOT_SET,
  PROVISIONING_IN_PROGRESS,
  FUTURE_START_DATE,
  INVALID_PAYMENT_INSTRUMENT,
  INCOMPATIBLE_CURRENCY,
  ACCOUNT_SUSPENDED,
  UNSUPPORTED_OPERATION,
  AGREEMENT_INACTIVE,
  AGREEMENT_ACTIVE,
  PRODUCT_RESTRICTED
};

namespace AgreementEntitlementStatusReasonCodeMapper {
AWS_AGREEMENTSERVICE_API AgreementEntitlementStatusReasonCode GetAgreementEntitlementStatusReasonCodeForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementEntitlementStatusReasonCode(AgreementEntitlementStatusReasonCode value);
}  // namespace AgreementEntitlementStatusReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
