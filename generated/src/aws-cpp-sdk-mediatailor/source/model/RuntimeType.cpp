/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/RuntimeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace RuntimeTypeMapper {

static const int JSONATA_HASH = HashingUtils::HashString("JSONATA");

RuntimeType GetRuntimeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == JSONATA_HASH) {
    return RuntimeType::JSONATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RuntimeType>(hashCode);
  }

  return RuntimeType::NOT_SET;
}

Aws::String GetNameForRuntimeType(RuntimeType enumValue) {
  switch (enumValue) {
    case RuntimeType::NOT_SET:
      return {};
    case RuntimeType::JSONATA:
      return "JSONATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RuntimeTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
