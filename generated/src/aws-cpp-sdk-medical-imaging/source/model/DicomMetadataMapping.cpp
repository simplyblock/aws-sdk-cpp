/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medical-imaging/model/DicomMetadataMapping.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MedicalImaging {
namespace Model {

DicomMetadataMapping::DicomMetadataMapping(JsonView jsonValue) { *this = jsonValue; }

DicomMetadataMapping& DicomMetadataMapping::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("studyInstanceUID")) {
    m_studyInstanceUID = jsonValue.GetString("studyInstanceUID");
    m_studyInstanceUIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("seriesInstanceUID")) {
    m_seriesInstanceUID = jsonValue.GetString("seriesInstanceUID");
    m_seriesInstanceUIDHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadataFilePath")) {
    m_metadataFilePath = jsonValue.GetString("metadataFilePath");
    m_metadataFilePathHasBeenSet = true;
  }
  return *this;
}

JsonValue DicomMetadataMapping::Jsonize() const {
  JsonValue payload;

  if (m_studyInstanceUIDHasBeenSet) {
    payload.WithString("studyInstanceUID", m_studyInstanceUID);
  }

  if (m_seriesInstanceUIDHasBeenSet) {
    payload.WithString("seriesInstanceUID", m_seriesInstanceUID);
  }

  if (m_metadataFilePathHasBeenSet) {
    payload.WithString("metadataFilePath", m_metadataFilePath);
  }

  return payload;
}

}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
