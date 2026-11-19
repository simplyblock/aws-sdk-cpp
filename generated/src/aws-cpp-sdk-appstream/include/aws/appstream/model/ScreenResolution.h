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
enum class ScreenResolution { NOT_SET, W_1280xH_720 };

namespace ScreenResolutionMapper {
AWS_APPSTREAM_API ScreenResolution GetScreenResolutionForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForScreenResolution(ScreenResolution value);
}  // namespace ScreenResolutionMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
