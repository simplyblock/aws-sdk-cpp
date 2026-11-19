/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/entityresolution/model/MatchingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {

MatchingConfig::MatchingConfig(JsonView jsonValue) { *this = jsonValue; }

MatchingConfig& MatchingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableTransitiveMatching")) {
    m_enableTransitiveMatching = jsonValue.GetBool("enableTransitiveMatching");
    m_enableTransitiveMatchingHasBeenSet = true;
  }
  return *this;
}

JsonValue MatchingConfig::Jsonize() const {
  JsonValue payload;

  if (m_enableTransitiveMatchingHasBeenSet) {
    payload.WithBool("enableTransitiveMatching", m_enableTransitiveMatching);
  }

  return payload;
}

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
