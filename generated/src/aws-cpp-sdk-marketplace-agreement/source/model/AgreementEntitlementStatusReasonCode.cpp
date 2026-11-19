/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementEntitlementStatusReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementEntitlementStatusReasonCodeMapper {

static const int PROVISIONING_IN_PROGRESS_HASH = HashingUtils::HashString("PROVISIONING_IN_PROGRESS");
static const int FUTURE_START_DATE_HASH = HashingUtils::HashString("FUTURE_START_DATE");
static const int INVALID_PAYMENT_INSTRUMENT_HASH = HashingUtils::HashString("INVALID_PAYMENT_INSTRUMENT");
static const int INCOMPATIBLE_CURRENCY_HASH = HashingUtils::HashString("INCOMPATIBLE_CURRENCY");
static const int ACCOUNT_SUSPENDED_HASH = HashingUtils::HashString("ACCOUNT_SUSPENDED");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UNSUPPORTED_OPERATION");
static const int AGREEMENT_INACTIVE_HASH = HashingUtils::HashString("AGREEMENT_INACTIVE");
static const int AGREEMENT_ACTIVE_HASH = HashingUtils::HashString("AGREEMENT_ACTIVE");
static const int PRODUCT_RESTRICTED_HASH = HashingUtils::HashString("PRODUCT_RESTRICTED");

AgreementEntitlementStatusReasonCode GetAgreementEntitlementStatusReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVISIONING_IN_PROGRESS_HASH) {
    return AgreementEntitlementStatusReasonCode::PROVISIONING_IN_PROGRESS;
  } else if (hashCode == FUTURE_START_DATE_HASH) {
    return AgreementEntitlementStatusReasonCode::FUTURE_START_DATE;
  } else if (hashCode == INVALID_PAYMENT_INSTRUMENT_HASH) {
    return AgreementEntitlementStatusReasonCode::INVALID_PAYMENT_INSTRUMENT;
  } else if (hashCode == INCOMPATIBLE_CURRENCY_HASH) {
    return AgreementEntitlementStatusReasonCode::INCOMPATIBLE_CURRENCY;
  } else if (hashCode == ACCOUNT_SUSPENDED_HASH) {
    return AgreementEntitlementStatusReasonCode::ACCOUNT_SUSPENDED;
  } else if (hashCode == UNSUPPORTED_OPERATION_HASH) {
    return AgreementEntitlementStatusReasonCode::UNSUPPORTED_OPERATION;
  } else if (hashCode == AGREEMENT_INACTIVE_HASH) {
    return AgreementEntitlementStatusReasonCode::AGREEMENT_INACTIVE;
  } else if (hashCode == AGREEMENT_ACTIVE_HASH) {
    return AgreementEntitlementStatusReasonCode::AGREEMENT_ACTIVE;
  } else if (hashCode == PRODUCT_RESTRICTED_HASH) {
    return AgreementEntitlementStatusReasonCode::PRODUCT_RESTRICTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementEntitlementStatusReasonCode>(hashCode);
  }

  return AgreementEntitlementStatusReasonCode::NOT_SET;
}

Aws::String GetNameForAgreementEntitlementStatusReasonCode(AgreementEntitlementStatusReasonCode enumValue) {
  switch (enumValue) {
    case AgreementEntitlementStatusReasonCode::NOT_SET:
      return {};
    case AgreementEntitlementStatusReasonCode::PROVISIONING_IN_PROGRESS:
      return "PROVISIONING_IN_PROGRESS";
    case AgreementEntitlementStatusReasonCode::FUTURE_START_DATE:
      return "FUTURE_START_DATE";
    case AgreementEntitlementStatusReasonCode::INVALID_PAYMENT_INSTRUMENT:
      return "INVALID_PAYMENT_INSTRUMENT";
    case AgreementEntitlementStatusReasonCode::INCOMPATIBLE_CURRENCY:
      return "INCOMPATIBLE_CURRENCY";
    case AgreementEntitlementStatusReasonCode::ACCOUNT_SUSPENDED:
      return "ACCOUNT_SUSPENDED";
    case AgreementEntitlementStatusReasonCode::UNSUPPORTED_OPERATION:
      return "UNSUPPORTED_OPERATION";
    case AgreementEntitlementStatusReasonCode::AGREEMENT_INACTIVE:
      return "AGREEMENT_INACTIVE";
    case AgreementEntitlementStatusReasonCode::AGREEMENT_ACTIVE:
      return "AGREEMENT_ACTIVE";
    case AgreementEntitlementStatusReasonCode::PRODUCT_RESTRICTED:
      return "PRODUCT_RESTRICTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementEntitlementStatusReasonCodeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
