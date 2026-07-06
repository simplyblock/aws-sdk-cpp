/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ItemizedCharge.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ItemizedCharge::ItemizedCharge(JsonView jsonValue) { *this = jsonValue; }

ItemizedCharge& ItemizedCharge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dimensionKey")) {
    m_dimensionKey = jsonValue.GetString("dimensionKey");
    m_dimensionKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("newQuantity")) {
    m_newQuantity = jsonValue.GetInteger("newQuantity");
    m_newQuantityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("oldQuantity")) {
    m_oldQuantity = jsonValue.GetInteger("oldQuantity");
    m_oldQuantityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeReference")) {
    m_chargeReference = jsonValue.GetString("chargeReference");
    m_chargeReferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("incrementalChargeAmount")) {
    m_incrementalChargeAmount = jsonValue.GetString("incrementalChargeAmount");
    m_incrementalChargeAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue ItemizedCharge::Jsonize() const {
  JsonValue payload;

  if (m_dimensionKeyHasBeenSet) {
    payload.WithString("dimensionKey", m_dimensionKey);
  }

  if (m_newQuantityHasBeenSet) {
    payload.WithInteger("newQuantity", m_newQuantity);
  }

  if (m_oldQuantityHasBeenSet) {
    payload.WithInteger("oldQuantity", m_oldQuantity);
  }

  if (m_chargeReferenceHasBeenSet) {
    payload.WithString("chargeReference", m_chargeReference);
  }

  if (m_incrementalChargeAmountHasBeenSet) {
    payload.WithString("incrementalChargeAmount", m_incrementalChargeAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
