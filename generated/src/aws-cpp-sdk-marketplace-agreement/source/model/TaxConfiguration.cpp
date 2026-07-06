/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/TaxConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

TaxConfiguration::TaxConfiguration(JsonView jsonValue) { *this = jsonValue; }

TaxConfiguration& TaxConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("taxEstimation")) {
    m_taxEstimation = TaxEstimationMapper::GetTaxEstimationForName(jsonValue.GetString("taxEstimation"));
    m_taxEstimationHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_taxEstimationHasBeenSet) {
    payload.WithString("taxEstimation", TaxEstimationMapper::GetNameForTaxEstimation(m_taxEstimation));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
