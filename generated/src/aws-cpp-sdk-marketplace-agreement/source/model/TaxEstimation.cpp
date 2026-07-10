/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/TaxEstimation.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace TaxEstimationMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

TaxEstimation GetTaxEstimationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return TaxEstimation::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return TaxEstimation::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TaxEstimation>(hashCode);
  }

  return TaxEstimation::NOT_SET;
}

Aws::String GetNameForTaxEstimation(TaxEstimation enumValue) {
  switch (enumValue) {
    case TaxEstimation::NOT_SET:
      return {};
    case TaxEstimation::DISABLED:
      return "DISABLED";
    case TaxEstimation::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TaxEstimationMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
