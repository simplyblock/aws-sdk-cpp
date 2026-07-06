/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/DeliverySourceConfigurationSchemaValueType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace DeliverySourceConfigurationSchemaValueTypeMapper {

static const int string_HASH = HashingUtils::HashString("string");
static const int boolean_HASH = HashingUtils::HashString("boolean");
static const int int__HASH = HashingUtils::HashString("int");
static const int double__HASH = HashingUtils::HashString("double");
static const int long__HASH = HashingUtils::HashString("long");

DeliverySourceConfigurationSchemaValueType GetDeliverySourceConfigurationSchemaValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == string_HASH) {
    return DeliverySourceConfigurationSchemaValueType::string;
  } else if (hashCode == boolean_HASH) {
    return DeliverySourceConfigurationSchemaValueType::boolean;
  } else if (hashCode == int__HASH) {
    return DeliverySourceConfigurationSchemaValueType::int_;
  } else if (hashCode == double__HASH) {
    return DeliverySourceConfigurationSchemaValueType::double_;
  } else if (hashCode == long__HASH) {
    return DeliverySourceConfigurationSchemaValueType::long_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliverySourceConfigurationSchemaValueType>(hashCode);
  }

  return DeliverySourceConfigurationSchemaValueType::NOT_SET;
}

Aws::String GetNameForDeliverySourceConfigurationSchemaValueType(DeliverySourceConfigurationSchemaValueType enumValue) {
  switch (enumValue) {
    case DeliverySourceConfigurationSchemaValueType::NOT_SET:
      return {};
    case DeliverySourceConfigurationSchemaValueType::string:
      return "string";
    case DeliverySourceConfigurationSchemaValueType::boolean:
      return "boolean";
    case DeliverySourceConfigurationSchemaValueType::int_:
      return "int";
    case DeliverySourceConfigurationSchemaValueType::double_:
      return "double";
    case DeliverySourceConfigurationSchemaValueType::long_:
      return "long";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliverySourceConfigurationSchemaValueTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
