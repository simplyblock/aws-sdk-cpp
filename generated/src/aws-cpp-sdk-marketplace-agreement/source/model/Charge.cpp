/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/Charge.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

Charge::Charge(JsonView jsonValue) { *this = jsonValue; }

Charge& Charge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revision")) {
    m_revision = jsonValue.GetInt64("revision");
    m_revisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementType")) {
    m_agreementType = jsonValue.GetString("agreementType");
    m_agreementTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("purchaseOrderReference")) {
    m_purchaseOrderReference = jsonValue.GetString("purchaseOrderReference");
    m_purchaseOrderReferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("time")) {
    m_time = jsonValue.GetDouble("time");
    m_timeHasBeenSet = true;
  }
  return *this;
}

JsonValue Charge::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("revision", m_revision);
  }

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_agreementTypeHasBeenSet) {
    payload.WithString("agreementType", m_agreementType);
  }

  if (m_purchaseOrderReferenceHasBeenSet) {
    payload.WithString("purchaseOrderReference", m_purchaseOrderReference);
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_timeHasBeenSet) {
    payload.WithDouble("time", m_time.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
