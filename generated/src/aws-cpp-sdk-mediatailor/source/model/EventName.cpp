/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/EventName.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace EventNameMapper {

static const int PRE_SESSION_INITIALIZATION_HASH = HashingUtils::HashString("PRE_SESSION_INITIALIZATION");
static const int PRE_ADS_REQUEST_HASH = HashingUtils::HashString("PRE_ADS_REQUEST");

EventName GetEventNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRE_SESSION_INITIALIZATION_HASH) {
    return EventName::PRE_SESSION_INITIALIZATION;
  } else if (hashCode == PRE_ADS_REQUEST_HASH) {
    return EventName::PRE_ADS_REQUEST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EventName>(hashCode);
  }

  return EventName::NOT_SET;
}

Aws::String GetNameForEventName(EventName enumValue) {
  switch (enumValue) {
    case EventName::NOT_SET:
      return {};
    case EventName::PRE_SESSION_INITIALIZATION:
      return "PRE_SESSION_INITIALIZATION";
    case EventName::PRE_ADS_REQUEST:
      return "PRE_ADS_REQUEST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EventNameMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
