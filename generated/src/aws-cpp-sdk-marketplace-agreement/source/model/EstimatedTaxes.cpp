/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/EstimatedTaxes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

EstimatedTaxes::EstimatedTaxes(JsonView jsonValue) { *this = jsonValue; }

EstimatedTaxes& EstimatedTaxes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("breakdown")) {
    Aws::Utils::Array<JsonView> breakdownJsonList = jsonValue.GetArray("breakdown");
    for (unsigned breakdownIndex = 0; breakdownIndex < breakdownJsonList.GetLength(); ++breakdownIndex) {
      m_breakdown.push_back(breakdownJsonList[breakdownIndex].AsObject());
    }
    m_breakdownHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalAmount")) {
    m_totalAmount = jsonValue.GetString("totalAmount");
    m_totalAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue EstimatedTaxes::Jsonize() const {
  JsonValue payload;

  if (m_breakdownHasBeenSet) {
    Aws::Utils::Array<JsonValue> breakdownJsonList(m_breakdown.size());
    for (unsigned breakdownIndex = 0; breakdownIndex < breakdownJsonList.GetLength(); ++breakdownIndex) {
      breakdownJsonList[breakdownIndex].AsObject(m_breakdown[breakdownIndex].Jsonize());
    }
    payload.WithArray("breakdown", std::move(breakdownJsonList));
  }

  if (m_totalAmountHasBeenSet) {
    payload.WithString("totalAmount", m_totalAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
