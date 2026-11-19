/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

namespace Aws {
namespace MediaTailor {
namespace Model {
enum class MethodType { NOT_SET, GET_, POST };

namespace MethodTypeMapper {
AWS_MEDIATAILOR_API MethodType GetMethodTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForMethodType(MethodType value);
}  // namespace MethodTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
