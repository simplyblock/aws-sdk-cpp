/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>

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
 * <p>Maps DCM files to their metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medical-imaging-2023-07-19/DicomMetadataMapping">AWS
 * API Reference</a></p>
 */
class DicomMetadataMapping {
 public:
  AWS_MEDICALIMAGING_API DicomMetadataMapping() = default;
  AWS_MEDICALIMAGING_API DicomMetadataMapping(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDICALIMAGING_API DicomMetadataMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDICALIMAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Study Instance UID that identifies the study.</p>
   */
  inline const Aws::String& GetStudyInstanceUID() const { return m_studyInstanceUID; }
  inline bool StudyInstanceUIDHasBeenSet() const { return m_studyInstanceUIDHasBeenSet; }
  template <typename StudyInstanceUIDT = Aws::String>
  void SetStudyInstanceUID(StudyInstanceUIDT&& value) {
    m_studyInstanceUIDHasBeenSet = true;
    m_studyInstanceUID = std::forward<StudyInstanceUIDT>(value);
  }
  template <typename StudyInstanceUIDT = Aws::String>
  DicomMetadataMapping& WithStudyInstanceUID(StudyInstanceUIDT&& value) {
    SetStudyInstanceUID(std::forward<StudyInstanceUIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Series Instance UID that identifies the series. This parameter is
   * optional because the mapping might be at the study level.</p>
   */
  inline const Aws::String& GetSeriesInstanceUID() const { return m_seriesInstanceUID; }
  inline bool SeriesInstanceUIDHasBeenSet() const { return m_seriesInstanceUIDHasBeenSet; }
  template <typename SeriesInstanceUIDT = Aws::String>
  void SetSeriesInstanceUID(SeriesInstanceUIDT&& value) {
    m_seriesInstanceUIDHasBeenSet = true;
    m_seriesInstanceUID = std::forward<SeriesInstanceUIDT>(value);
  }
  template <typename SeriesInstanceUIDT = Aws::String>
  DicomMetadataMapping& WithSeriesInstanceUID(SeriesInstanceUIDT&& value) {
    SetSeriesInstanceUID(std::forward<SeriesInstanceUIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path to the JSON metadata file relative to inputS3Uri.</p>
   */
  inline const Aws::String& GetMetadataFilePath() const { return m_metadataFilePath; }
  inline bool MetadataFilePathHasBeenSet() const { return m_metadataFilePathHasBeenSet; }
  template <typename MetadataFilePathT = Aws::String>
  void SetMetadataFilePath(MetadataFilePathT&& value) {
    m_metadataFilePathHasBeenSet = true;
    m_metadataFilePath = std::forward<MetadataFilePathT>(value);
  }
  template <typename MetadataFilePathT = Aws::String>
  DicomMetadataMapping& WithMetadataFilePath(MetadataFilePathT&& value) {
    SetMetadataFilePath(std::forward<MetadataFilePathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_studyInstanceUID;

  Aws::String m_seriesInstanceUID;

  Aws::String m_metadataFilePath;
  bool m_studyInstanceUIDHasBeenSet = false;
  bool m_seriesInstanceUIDHasBeenSet = false;
  bool m_metadataFilePathHasBeenSet = false;
};

}  // namespace Model
}  // namespace MedicalImaging
}  // namespace Aws
