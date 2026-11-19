/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/DicomMetadataMapping.h>

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
 * <p>The configuration parameters that are specific to DICOM JSON metadata import
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DicomJsonMetadataImportConfiguration">AWS
 * API Reference</a></p>
 */
class DicomJsonMetadataImportConfiguration {
 public:
  AWS_MEDICALIMAGING_API DicomJsonMetadataImportConfiguration() = default;
  AWS_MEDICALIMAGING_API DicomJsonMetadataImportConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDICALIMAGING_API DicomJsonMetadataImportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Maps DCM files to their metadata.</p>
   */
  inline const Aws::Vector<DicomMetadataMapping>& GetDicomMetadataMappings() const { return m_dicomMetadataMappings; }
  inline bool DicomMetadataMappingsHasBeenSet() const { return m_dicomMetadataMappingsHasBeenSet; }
  template <typename DicomMetadataMappingsT = Aws::Vector<DicomMetadataMapping>>
  void SetDicomMetadataMappings(DicomMetadataMappingsT&& value) {
    m_dicomMetadataMappingsHasBeenSet = true;
    m_dicomMetadataMappings = std::forward<DicomMetadataMappingsT>(value);
  }
  template <typename DicomMetadataMappingsT = Aws::Vector<DicomMetadataMapping>>
  DicomJsonMetadataImportConfiguration& WithDicomMetadataMappings(DicomMetadataMappingsT&& value) {
    SetDicomMetadataMappings(std::forward<DicomMetadataMappingsT>(value));
    return *this;
  }
  template <typename DicomMetadataMappingsT = DicomMetadataMapping>
  DicomJsonMetadataImportConfiguration& AddDicomMetadataMappings(DicomMetadataMappingsT&& value) {
    m_dicomMetadataMappingsHasBeenSet = true;
    m_dicomMetadataMappings.emplace_back(std::forward<DicomMetadataMappingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<DicomMetadataMapping> m_dicomMetadataMappings;
  bool m_dicomMetadataMappingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
