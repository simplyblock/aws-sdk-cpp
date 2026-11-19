/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DeliverySourceConfigurationSchema.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

DeliverySourceConfigurationSchema::DeliverySourceConfigurationSchema(JsonView jsonValue) { *this = jsonValue; }

DeliverySourceConfigurationSchema& DeliverySourceConfigurationSchema::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("keyName")) {
    m_keyName = jsonValue.GetString("keyName");
    m_keyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("valueType")) {
    m_valueType = DeliverySourceConfigurationSchemaValueTypeMapper::GetDeliverySourceConfigurationSchemaValueTypeForName(
        jsonValue.GetString("valueType"));
    m_valueTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultValue")) {
    m_defaultValue = jsonValue.GetString("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportedValues")) {
    Aws::Utils::Array<JsonView> supportedValuesJsonList = jsonValue.GetArray("supportedValues");
    for (unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex) {
      m_supportedValues.push_back(supportedValuesJsonList[supportedValuesIndex].AsString());
    }
    m_supportedValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minValue")) {
    m_minValue = jsonValue.GetDouble("minValue");
    m_minValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxValue")) {
    m_maxValue = jsonValue.GetDouble("maxValue");
    m_maxValueHasBeenSet = true;
  }
  return *this;
}

JsonValue DeliverySourceConfigurationSchema::Jsonize() const {
  JsonValue payload;

  if (m_keyNameHasBeenSet) {
    payload.WithString("keyName", m_keyName);
  }

  if (m_valueTypeHasBeenSet) {
    payload.WithString("valueType",
                       DeliverySourceConfigurationSchemaValueTypeMapper::GetNameForDeliverySourceConfigurationSchemaValueType(m_valueType));
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("defaultValue", m_defaultValue);
  }

  if (m_supportedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> supportedValuesJsonList(m_supportedValues.size());
    for (unsigned supportedValuesIndex = 0; supportedValuesIndex < supportedValuesJsonList.GetLength(); ++supportedValuesIndex) {
      supportedValuesJsonList[supportedValuesIndex].AsString(m_supportedValues[supportedValuesIndex]);
    }
    payload.WithArray("supportedValues", std::move(supportedValuesJsonList));
  }

  if (m_minValueHasBeenSet) {
    payload.WithDouble("minValue", m_minValue);
  }

  if (m_maxValueHasBeenSet) {
    payload.WithDouble("maxValue", m_maxValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
