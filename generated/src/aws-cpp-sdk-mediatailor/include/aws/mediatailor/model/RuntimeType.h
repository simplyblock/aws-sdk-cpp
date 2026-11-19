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
enum class RuntimeType { NOT_SET, JSONATA };

namespace RuntimeTypeMapper {
AWS_MEDIATAILOR_API RuntimeType GetRuntimeTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForRuntimeType(RuntimeType value);
}  // namespace RuntimeTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
