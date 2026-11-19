/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DeliverySource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

DeliverySource::DeliverySource(JsonView jsonValue) { *this = jsonValue; }

DeliverySource& DeliverySource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArns")) {
    Aws::Utils::Array<JsonView> resourceArnsJsonList = jsonValue.GetArray("resourceArns");
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      m_resourceArns.push_back(resourceArnsJsonList[resourceArnsIndex].AsString());
    }
    m_resourceArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("service")) {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logType")) {
    m_logType = jsonValue.GetString("logType");
    m_logTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deliverySourceConfiguration")) {
    Aws::Map<Aws::String, JsonView> deliverySourceConfigurationJsonMap = jsonValue.GetObject("deliverySourceConfiguration").GetAllObjects();
    for (auto& deliverySourceConfigurationItem : deliverySourceConfigurationJsonMap) {
      m_deliverySourceConfiguration[deliverySourceConfigurationItem.first] = deliverySourceConfigurationItem.second.AsString();
    }
    m_deliverySourceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DeliverySourceStatusMapper::GetDeliverySourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = DeliverySourceStatusReasonMapper::GetDeliverySourceStatusReasonForName(jsonValue.GetString("statusReason"));
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DeliverySource::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_resourceArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnsJsonList(m_resourceArns.size());
    for (unsigned resourceArnsIndex = 0; resourceArnsIndex < resourceArnsJsonList.GetLength(); ++resourceArnsIndex) {
      resourceArnsJsonList[resourceArnsIndex].AsString(m_resourceArns[resourceArnsIndex]);
    }
    payload.WithArray("resourceArns", std::move(resourceArnsJsonList));
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("service", m_service);
  }

  if (m_logTypeHasBeenSet) {
    payload.WithString("logType", m_logType);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_deliverySourceConfigurationHasBeenSet) {
    JsonValue deliverySourceConfigurationJsonMap;
    for (auto& deliverySourceConfigurationItem : m_deliverySourceConfiguration) {
      deliverySourceConfigurationJsonMap.WithString(deliverySourceConfigurationItem.first, deliverySourceConfigurationItem.second);
    }
    payload.WithObject("deliverySourceConfiguration", std::move(deliverySourceConfigurationJsonMap));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DeliverySourceStatusMapper::GetNameForDeliverySourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", DeliverySourceStatusReasonMapper::GetNameForDeliverySourceStatusReason(m_statusReason));
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
