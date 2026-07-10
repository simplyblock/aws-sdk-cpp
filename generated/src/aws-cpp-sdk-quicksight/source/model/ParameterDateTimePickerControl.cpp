/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ParameterDateTimePickerControl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ParameterDateTimePickerControl::ParameterDateTimePickerControl(JsonView jsonValue) { *this = jsonValue; }

ParameterDateTimePickerControl& ParameterDateTimePickerControl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ParameterControlId")) {
    m_parameterControlId = jsonValue.GetString("ParameterControlId");
    m_parameterControlIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Title")) {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SourceParameterName")) {
    m_sourceParameterName = jsonValue.GetString("SourceParameterName");
    m_sourceParameterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayOptions")) {
    m_displayOptions = jsonValue.GetObject("DisplayOptions");
    m_displayOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ControlTitleFormatText")) {
    m_controlTitleFormatText = jsonValue.GetObject("ControlTitleFormatText");
    m_controlTitleFormatTextHasBeenSet = true;
  }
  return *this;
}

JsonValue ParameterDateTimePickerControl::Jsonize() const {
  JsonValue payload;

  if (m_parameterControlIdHasBeenSet) {
    payload.WithString("ParameterControlId", m_parameterControlId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("Title", m_title);
  }

  if (m_sourceParameterNameHasBeenSet) {
    payload.WithString("SourceParameterName", m_sourceParameterName);
  }

  if (m_displayOptionsHasBeenSet) {
    payload.WithObject("DisplayOptions", m_displayOptions.Jsonize());
  }

  if (m_controlTitleFormatTextHasBeenSet) {
    payload.WithObject("ControlTitleFormatText", m_controlTitleFormatText.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
