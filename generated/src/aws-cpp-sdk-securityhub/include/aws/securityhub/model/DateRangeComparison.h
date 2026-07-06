/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class DateRangeComparison { NOT_SET, WITHIN, OLDER_THAN };

namespace DateRangeComparisonMapper {
AWS_SECURITYHUB_API DateRangeComparison GetDateRangeComparisonForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForDateRangeComparison(DateRangeComparison value);
}  // namespace DateRangeComparisonMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
