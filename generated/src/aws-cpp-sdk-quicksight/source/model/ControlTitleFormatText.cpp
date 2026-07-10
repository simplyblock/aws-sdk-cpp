/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ControlTitleFormatText.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ControlTitleFormatText::ControlTitleFormatText(JsonView jsonValue) { *this = jsonValue; }

ControlTitleFormatText& ControlTitleFormatText::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PlainText")) {
    m_plainText = jsonValue.GetString("PlainText");
    m_plainTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RichText")) {
    m_richText = jsonValue.GetString("RichText");
    m_richTextHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlTitleFormatText::Jsonize() const {
  JsonValue payload;

  if (m_plainTextHasBeenSet) {
    payload.WithString("PlainText", m_plainText);
  }

  if (m_richTextHasBeenSet) {
    payload.WithString("RichText", m_richText);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
