/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ScreenResolution.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace ScreenResolutionMapper {

static const int W_1280xH_720_HASH = HashingUtils::HashString("W_1280xH_720");

ScreenResolution GetScreenResolutionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == W_1280xH_720_HASH) {
    return ScreenResolution::W_1280xH_720;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScreenResolution>(hashCode);
  }

  return ScreenResolution::NOT_SET;
}

Aws::String GetNameForScreenResolution(ScreenResolution enumValue) {
  switch (enumValue) {
    case ScreenResolution::NOT_SET:
      return {};
    case ScreenResolution::W_1280xH_720:
      return "W_1280xH_720";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScreenResolutionMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
