/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/DeliverySourceStatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace DeliverySourceStatusReasonMapper {

static const int RESOURCE_DELETED_HASH = HashingUtils::HashString("RESOURCE_DELETED");

DeliverySourceStatusReason GetDeliverySourceStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RESOURCE_DELETED_HASH) {
    return DeliverySourceStatusReason::RESOURCE_DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliverySourceStatusReason>(hashCode);
  }

  return DeliverySourceStatusReason::NOT_SET;
}

Aws::String GetNameForDeliverySourceStatusReason(DeliverySourceStatusReason enumValue) {
  switch (enumValue) {
    case DeliverySourceStatusReason::NOT_SET:
      return {};
    case DeliverySourceStatusReason::RESOURCE_DELETED:
      return "RESOURCE_DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliverySourceStatusReasonMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
