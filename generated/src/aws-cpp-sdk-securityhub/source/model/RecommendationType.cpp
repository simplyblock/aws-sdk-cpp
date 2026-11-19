/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/RecommendationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace RecommendationTypeMapper {

static const int UNUSED_PERMISSION_RECOMMENDATION_HASH = HashingUtils::HashString("UNUSED_PERMISSION_RECOMMENDATION");

RecommendationType GetRecommendationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UNUSED_PERMISSION_RECOMMENDATION_HASH) {
    return RecommendationType::UNUSED_PERMISSION_RECOMMENDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecommendationType>(hashCode);
  }

  return RecommendationType::NOT_SET;
}

Aws::String GetNameForRecommendationType(RecommendationType enumValue) {
  switch (enumValue) {
    case RecommendationType::NOT_SET:
      return {};
    case RecommendationType::UNUSED_PERMISSION_RECOMMENDATION:
      return "UNUSED_PERMISSION_RECOMMENDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecommendationTypeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
