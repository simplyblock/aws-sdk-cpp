/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ScreenImageFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace ScreenImageFormatMapper {

static const int PNG_HASH = HashingUtils::HashString("PNG");
static const int JPEG_HASH = HashingUtils::HashString("JPEG");

ScreenImageFormat GetScreenImageFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PNG_HASH) {
    return ScreenImageFormat::PNG;
  } else if (hashCode == JPEG_HASH) {
    return ScreenImageFormat::JPEG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ScreenImageFormat>(hashCode);
  }

  return ScreenImageFormat::NOT_SET;
}

Aws::String GetNameForScreenImageFormat(ScreenImageFormat enumValue) {
  switch (enumValue) {
    case ScreenImageFormat::NOT_SET:
      return {};
    case ScreenImageFormat::PNG:
      return "PNG";
    case ScreenImageFormat::JPEG:
      return "JPEG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ScreenImageFormatMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
