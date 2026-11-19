/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/MethodType.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace MethodTypeMapper {

static const int GET__HASH = HashingUtils::HashString("GET");
static const int POST_HASH = HashingUtils::HashString("POST");

MethodType GetMethodTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GET__HASH) {
    return MethodType::GET_;
  } else if (hashCode == POST_HASH) {
    return MethodType::POST;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MethodType>(hashCode);
  }

  return MethodType::NOT_SET;
}

Aws::String GetNameForMethodType(MethodType enumValue) {
  switch (enumValue) {
    case MethodType::NOT_SET:
      return {};
    case MethodType::GET_:
      return "GET";
    case MethodType::POST:
      return "POST";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MethodTypeMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
