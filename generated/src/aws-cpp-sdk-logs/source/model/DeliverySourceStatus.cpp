/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/DeliverySourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace DeliverySourceStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");

DeliverySourceStatus GetDeliverySourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return DeliverySourceStatus::ACTIVE;
  } else if (hashCode == INACTIVE_HASH) {
    return DeliverySourceStatus::INACTIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliverySourceStatus>(hashCode);
  }

  return DeliverySourceStatus::NOT_SET;
}

Aws::String GetNameForDeliverySourceStatus(DeliverySourceStatus enumValue) {
  switch (enumValue) {
    case DeliverySourceStatus::NOT_SET:
      return {};
    case DeliverySourceStatus::ACTIVE:
      return "ACTIVE";
    case DeliverySourceStatus::INACTIVE:
      return "INACTIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliverySourceStatusMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
