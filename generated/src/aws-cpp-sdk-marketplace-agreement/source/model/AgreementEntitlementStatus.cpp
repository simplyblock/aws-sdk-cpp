/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/AgreementEntitlementStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace AgreementEntitlementStatusMapper {

static const int PROVISIONED_HASH = HashingUtils::HashString("PROVISIONED");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int DEPROVISIONED_HASH = HashingUtils::HashString("DEPROVISIONED");

AgreementEntitlementStatus GetAgreementEntitlementStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROVISIONED_HASH) {
    return AgreementEntitlementStatus::PROVISIONED;
  } else if (hashCode == SCHEDULED_HASH) {
    return AgreementEntitlementStatus::SCHEDULED;
  } else if (hashCode == PENDING_HASH) {
    return AgreementEntitlementStatus::PENDING;
  } else if (hashCode == FAILED_HASH) {
    return AgreementEntitlementStatus::FAILED;
  } else if (hashCode == DEPROVISIONED_HASH) {
    return AgreementEntitlementStatus::DEPROVISIONED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AgreementEntitlementStatus>(hashCode);
  }

  return AgreementEntitlementStatus::NOT_SET;
}

Aws::String GetNameForAgreementEntitlementStatus(AgreementEntitlementStatus enumValue) {
  switch (enumValue) {
    case AgreementEntitlementStatus::NOT_SET:
      return {};
    case AgreementEntitlementStatus::PROVISIONED:
      return "PROVISIONED";
    case AgreementEntitlementStatus::SCHEDULED:
      return "SCHEDULED";
    case AgreementEntitlementStatus::PENDING:
      return "PENDING";
    case AgreementEntitlementStatus::FAILED:
      return "FAILED";
    case AgreementEntitlementStatus::DEPROVISIONED:
      return "DEPROVISIONED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AgreementEntitlementStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
