/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medical-imaging/model/ImportConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MedicalImaging {
namespace Model {

ImportConfiguration::ImportConfiguration(JsonView jsonValue) { *this = jsonValue; }

ImportConfiguration& ImportConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dicomJsonMetadataImportConfiguration")) {
    m_dicomJsonMetadataImportConfiguration = jsonValue.GetObject("dicomJsonMetadataImportConfiguration");
    m_dicomJsonMetadataImportConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dicomJsonMetadataImportConfigurationHasBeenSet) {
    payload.WithObject("dicomJsonMetadataImportConfiguration", m_dicomJsonMetadataImportConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
