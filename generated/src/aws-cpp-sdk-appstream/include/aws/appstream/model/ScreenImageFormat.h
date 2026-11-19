/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AppStream {
namespace Model {
enum class ScreenImageFormat { NOT_SET, PNG, JPEG };

namespace ScreenImageFormatMapper {
AWS_APPSTREAM_API ScreenImageFormat GetScreenImageFormatForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForScreenImageFormat(ScreenImageFormat value);
}  // namespace ScreenImageFormatMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
