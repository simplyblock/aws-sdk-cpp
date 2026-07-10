/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EntityResolution {
namespace Model {

/**
 * <p>An object that contains configuration settings for the matching process in a
 * rule-based matching workflow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/MatchingConfig">AWS
 * API Reference</a></p>
 */
class MatchingConfig {
 public:
  AWS_ENTITYRESOLUTION_API MatchingConfig() = default;
  AWS_ENTITYRESOLUTION_API MatchingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENTITYRESOLUTION_API MatchingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables transitive matching for the rule-based matching workflow. When
   * enabled, records that match through different rules are grouped together into
   * the same match group.</p>
   */
  inline bool GetEnableTransitiveMatching() const { return m_enableTransitiveMatching; }
  inline bool EnableTransitiveMatchingHasBeenSet() const { return m_enableTransitiveMatchingHasBeenSet; }
  inline void SetEnableTransitiveMatching(bool value) {
    m_enableTransitiveMatchingHasBeenSet = true;
    m_enableTransitiveMatching = value;
  }
  inline MatchingConfig& WithEnableTransitiveMatching(bool value) {
    SetEnableTransitiveMatching(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableTransitiveMatching{false};
  bool m_enableTransitiveMatchingHasBeenSet = false;
};

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
