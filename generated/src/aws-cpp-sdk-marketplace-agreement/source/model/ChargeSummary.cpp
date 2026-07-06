/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ChargeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ChargeSummary::ChargeSummary(JsonView jsonValue) { *this = jsonValue; }

ChargeSummary& ChargeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("newAgreementValue")) {
    m_newAgreementValue = jsonValue.GetString("newAgreementValue");
    m_newAgreementValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("newAgreementValueAfterTax")) {
    m_newAgreementValueAfterTax = jsonValue.GetString("newAgreementValueAfterTax");
    m_newAgreementValueAfterTaxHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expectedCharges")) {
    Aws::Utils::Array<JsonView> expectedChargesJsonList = jsonValue.GetArray("expectedCharges");
    for (unsigned expectedChargesIndex = 0; expectedChargesIndex < expectedChargesJsonList.GetLength(); ++expectedChargesIndex) {
      m_expectedCharges.push_back(expectedChargesJsonList[expectedChargesIndex].AsObject());
    }
    m_expectedChargesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedTaxes")) {
    m_estimatedTaxes = jsonValue.GetObject("estimatedTaxes");
    m_estimatedTaxesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("itemizedCharges")) {
    Aws::Utils::Array<JsonView> itemizedChargesJsonList = jsonValue.GetArray("itemizedCharges");
    for (unsigned itemizedChargesIndex = 0; itemizedChargesIndex < itemizedChargesJsonList.GetLength(); ++itemizedChargesIndex) {
      m_itemizedCharges.push_back(itemizedChargesJsonList[itemizedChargesIndex].AsObject());
    }
    m_itemizedChargesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invoicingEntity")) {
    m_invoicingEntity = jsonValue.GetObject("invoicingEntity");
    m_invoicingEntityHasBeenSet = true;
  }
  return *this;
}

JsonValue ChargeSummary::Jsonize() const {
  JsonValue payload;

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_newAgreementValueHasBeenSet) {
    payload.WithString("newAgreementValue", m_newAgreementValue);
  }

  if (m_newAgreementValueAfterTaxHasBeenSet) {
    payload.WithString("newAgreementValueAfterTax", m_newAgreementValueAfterTax);
  }

  if (m_expectedChargesHasBeenSet) {
    Aws::Utils::Array<JsonValue> expectedChargesJsonList(m_expectedCharges.size());
    for (unsigned expectedChargesIndex = 0; expectedChargesIndex < expectedChargesJsonList.GetLength(); ++expectedChargesIndex) {
      expectedChargesJsonList[expectedChargesIndex].AsObject(m_expectedCharges[expectedChargesIndex].Jsonize());
    }
    payload.WithArray("expectedCharges", std::move(expectedChargesJsonList));
  }

  if (m_estimatedTaxesHasBeenSet) {
    payload.WithObject("estimatedTaxes", m_estimatedTaxes.Jsonize());
  }

  if (m_itemizedChargesHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemizedChargesJsonList(m_itemizedCharges.size());
    for (unsigned itemizedChargesIndex = 0; itemizedChargesIndex < itemizedChargesJsonList.GetLength(); ++itemizedChargesIndex) {
      itemizedChargesJsonList[itemizedChargesIndex].AsObject(m_itemizedCharges[itemizedChargesIndex].Jsonize());
    }
    payload.WithArray("itemizedCharges", std::move(itemizedChargesJsonList));
  }

  if (m_invoicingEntityHasBeenSet) {
    payload.WithObject("invoicingEntity", m_invoicingEntity.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
