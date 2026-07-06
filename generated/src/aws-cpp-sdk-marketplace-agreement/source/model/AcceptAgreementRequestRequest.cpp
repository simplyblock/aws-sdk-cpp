/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/AcceptAgreementRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptAgreementRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_agreementRequestIdHasBeenSet) {
    payload.WithString("agreementRequestId", m_agreementRequestId);
  }

  if (m_purchaseOrdersHasBeenSet) {
    Aws::Utils::Array<JsonValue> purchaseOrdersJsonList(m_purchaseOrders.size());
    for (unsigned purchaseOrdersIndex = 0; purchaseOrdersIndex < purchaseOrdersJsonList.GetLength(); ++purchaseOrdersIndex) {
      purchaseOrdersJsonList[purchaseOrdersIndex].AsObject(m_purchaseOrders[purchaseOrdersIndex].Jsonize());
    }
    payload.WithArray("purchaseOrders", std::move(purchaseOrdersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcceptAgreementRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.AcceptAgreementRequest"));
  return headers;
}
