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
enum class RecommendationType { NOT_SET, UNUSED_PERMISSION_RECOMMENDATION };

namespace RecommendationTypeMapper {
AWS_SECURITYHUB_API RecommendationType GetRecommendationTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRecommendationType(RecommendationType value);
}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
