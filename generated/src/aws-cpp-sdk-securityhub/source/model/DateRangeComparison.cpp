/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/DateRangeComparison.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace DateRangeComparisonMapper {

static const int WITHIN_HASH = HashingUtils::HashString("WITHIN");
static const int OLDER_THAN_HASH = HashingUtils::HashString("OLDER_THAN");

DateRangeComparison GetDateRangeComparisonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WITHIN_HASH) {
    return DateRangeComparison::WITHIN;
  } else if (hashCode == OLDER_THAN_HASH) {
    return DateRangeComparison::OLDER_THAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DateRangeComparison>(hashCode);
  }

  return DateRangeComparison::NOT_SET;
}

Aws::String GetNameForDateRangeComparison(DateRangeComparison enumValue) {
  switch (enumValue) {
    case DateRangeComparison::NOT_SET:
      return {};
    case DateRangeComparison::WITHIN:
      return "WITHIN";
    case DateRangeComparison::OLDER_THAN:
      return "OLDER_THAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DateRangeComparisonMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
