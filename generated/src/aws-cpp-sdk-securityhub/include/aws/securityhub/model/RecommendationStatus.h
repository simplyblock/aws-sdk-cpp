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
enum class RecommendationStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace RecommendationStatusMapper {
AWS_SECURITYHUB_API RecommendationStatus GetRecommendationStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRecommendationStatus(RecommendationStatus value);
}  // namespace RecommendationStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
