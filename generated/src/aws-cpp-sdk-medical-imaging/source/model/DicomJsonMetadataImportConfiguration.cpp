/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medical-imaging/model/DicomJsonMetadataImportConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MedicalImaging {
namespace Model {

DicomJsonMetadataImportConfiguration::DicomJsonMetadataImportConfiguration(JsonView jsonValue) { *this = jsonValue; }

DicomJsonMetadataImportConfiguration& DicomJsonMetadataImportConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dicomMetadataMappings")) {
    Aws::Utils::Array<JsonView> dicomMetadataMappingsJsonList = jsonValue.GetArray("dicomMetadataMappings");
    for (unsigned dicomMetadataMappingsIndex = 0; dicomMetadataMappingsIndex < dicomMetadataMappingsJsonList.GetLength();
         ++dicomMetadataMappingsIndex) {
      m_dicomMetadataMappings.push_back(dicomMetadataMappingsJsonList[dicomMetadataMappingsIndex].AsObject());
    }
    m_dicomMetadataMappingsHasBeenSet = true;
  }
  return *this;
}

JsonValue DicomJsonMetadataImportConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dicomMetadataMappingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dicomMetadataMappingsJsonList(m_dicomMetadataMappings.size());
    for (unsigned dicomMetadataMappingsIndex = 0; dicomMetadataMappingsIndex < dicomMetadataMappingsJsonList.GetLength();
         ++dicomMetadataMappingsIndex) {
      dicomMetadataMappingsJsonList[dicomMetadataMappingsIndex].AsObject(m_dicomMetadataMappings[dicomMetadataMappingsIndex].Jsonize());
    }
    payload.WithArray("dicomMetadataMappings", std::move(dicomMetadataMappingsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
