/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/DicomJsonMetadataImportConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MedicalImaging {
namespace Model {

/**
 * <p>The configuration options for different types of import
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/ImportConfiguration">AWS
 * API Reference</a></p>
 */
class ImportConfiguration {
 public:
  AWS_MEDICALIMAGING_API ImportConfiguration() = default;
  AWS_MEDICALIMAGING_API ImportConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDICALIMAGING_API ImportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const DicomJsonMetadataImportConfiguration& GetDicomJsonMetadataImportConfiguration() const {
    return m_dicomJsonMetadataImportConfiguration;
  }
  inline bool DicomJsonMetadataImportConfigurationHasBeenSet() const { return m_dicomJsonMetadataImportConfigurationHasBeenSet; }
  template <typename DicomJsonMetadataImportConfigurationT = DicomJsonMetadataImportConfiguration>
  void SetDicomJsonMetadataImportConfiguration(DicomJsonMetadataImportConfigurationT&& value) {
    m_dicomJsonMetadataImportConfigurationHasBeenSet = true;
    m_dicomJsonMetadataImportConfiguration = std::forward<DicomJsonMetadataImportConfigurationT>(value);
  }
  template <typename DicomJsonMetadataImportConfigurationT = DicomJsonMetadataImportConfiguration>
  ImportConfiguration& WithDicomJsonMetadataImportConfiguration(DicomJsonMetadataImportConfigurationT&& value) {
    SetDicomJsonMetadataImportConfiguration(std::forward<DicomJsonMetadataImportConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  DicomJsonMetadataImportConfiguration m_dicomJsonMetadataImportConfiguration;
  bool m_dicomJsonMetadataImportConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
