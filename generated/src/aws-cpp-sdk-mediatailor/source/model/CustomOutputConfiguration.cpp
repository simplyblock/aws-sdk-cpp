/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/model/CustomOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {

CustomOutputConfiguration::CustomOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

CustomOutputConfiguration& CustomOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Runtime")) {
    m_runtime = RuntimeTypeMapper::GetRuntimeTypeForName(jsonValue.GetString("Runtime"));
    m_runtimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Output")) {
    Aws::Map<Aws::String, JsonView> outputJsonMap = jsonValue.GetObject("Output").GetAllObjects();
    for (auto& outputItem : outputJsonMap) {
      m_output[outputItem.first] = outputItem.second.AsString();
    }
    m_outputHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_runtimeHasBeenSet) {
    payload.WithString("Runtime", RuntimeTypeMapper::GetNameForRuntimeType(m_runtime));
  }

  if (m_outputHasBeenSet) {
    JsonValue outputJsonMap;
    for (auto& outputItem : m_output) {
      outputJsonMap.WithString(outputItem.first, outputItem.second);
    }
    payload.WithObject("Output", std::move(outputJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
