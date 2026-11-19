/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The title format text configuration for a sheet control. This is a tagged
 * union type. Specify either <code>PlainText</code> or <code>RichText</code>, but
 * not both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ControlTitleFormatText">AWS
 * API Reference</a></p>
 */
class ControlTitleFormatText {
 public:
  AWS_QUICKSIGHT_API ControlTitleFormatText() = default;
  AWS_QUICKSIGHT_API ControlTitleFormatText(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ControlTitleFormatText& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The plain text format of the title text.</p>
   */
  inline const Aws::String& GetPlainText() const { return m_plainText; }
  inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
  template <typename PlainTextT = Aws::String>
  void SetPlainText(PlainTextT&& value) {
    m_plainTextHasBeenSet = true;
    m_plainText = std::forward<PlainTextT>(value);
  }
  template <typename PlainTextT = Aws::String>
  ControlTitleFormatText& WithPlainText(PlainTextT&& value) {
    SetPlainText(std::forward<PlainTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rich text format of the title text.</p>
   */
  inline const Aws::String& GetRichText() const { return m_richText; }
  inline bool RichTextHasBeenSet() const { return m_richTextHasBeenSet; }
  template <typename RichTextT = Aws::String>
  void SetRichText(RichTextT&& value) {
    m_richTextHasBeenSet = true;
    m_richText = std::forward<RichTextT>(value);
  }
  template <typename RichTextT = Aws::String>
  ControlTitleFormatText& WithRichText(RichTextT&& value) {
    SetRichText(std::forward<RichTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_plainText;

  Aws::String m_richText;
  bool m_plainTextHasBeenSet = false;
  bool m_richTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
