/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/CreateAgreementRequestRequest.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAgreementRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_intentHasBeenSet) {
    payload.WithString("intent", IntentMapper::GetNameForIntent(m_intent));
  }

  if (m_requestedTermsHasBeenSet) {
    Aws::Utils::Array<JsonValue> requestedTermsJsonList(m_requestedTerms.size());
    for (unsigned requestedTermsIndex = 0; requestedTermsIndex < requestedTermsJsonList.GetLength(); ++requestedTermsIndex) {
      requestedTermsJsonList[requestedTermsIndex].AsObject(m_requestedTerms[requestedTermsIndex].Jsonize());
    }
    payload.WithArray("requestedTerms", std::move(requestedTermsJsonList));
  }

  if (m_sourceAgreementIdentifierHasBeenSet) {
    payload.WithString("sourceAgreementIdentifier", m_sourceAgreementIdentifier);
  }

  if (m_agreementProposalIdentifierHasBeenSet) {
    payload.WithString("agreementProposalIdentifier", m_agreementProposalIdentifier);
  }

  if (m_taxConfigurationHasBeenSet) {
    payload.WithObject("taxConfiguration", m_taxConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAgreementRequestRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMPCommerceService_v20200301.CreateAgreementRequest"));
  return headers;
}
