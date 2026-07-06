/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/PurchaseOrder.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

PurchaseOrder::PurchaseOrder(JsonView jsonValue) { *this = jsonValue; }

PurchaseOrder& PurchaseOrder::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("chargeId")) {
    m_chargeId = jsonValue.GetString("chargeId");
    m_chargeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeRevision")) {
    m_chargeRevision = jsonValue.GetInt64("chargeRevision");
    m_chargeRevisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementId")) {
    m_agreementId = jsonValue.GetString("agreementId");
    m_agreementIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("purchaseOrderReference")) {
    m_purchaseOrderReference = jsonValue.GetString("purchaseOrderReference");
    m_purchaseOrderReferenceHasBeenSet = true;
  }
  return *this;
}

JsonValue PurchaseOrder::Jsonize() const {
  JsonValue payload;

  if (m_chargeIdHasBeenSet) {
    payload.WithString("chargeId", m_chargeId);
  }

  if (m_chargeRevisionHasBeenSet) {
    payload.WithInt64("chargeRevision", m_chargeRevision);
  }

  if (m_agreementIdHasBeenSet) {
    payload.WithString("agreementId", m_agreementId);
  }

  if (m_purchaseOrderReferenceHasBeenSet) {
    payload.WithString("purchaseOrderReference", m_purchaseOrderReference);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
