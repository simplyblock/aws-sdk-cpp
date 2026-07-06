/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/marketplace-agreement/model/GetAgreementEntitlementsResult.h>

#include <utility>

using namespace Aws::AgreementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAgreementEntitlementsResult::GetAgreementEntitlementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetAgreementEntitlementsResult& GetAgreementEntitlementsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("agreementEntitlements")) {
    Aws::Utils::Array<JsonView> agreementEntitlementsJsonList = jsonValue.GetArray("agreementEntitlements");
    for (unsigned agreementEntitlementsIndex = 0; agreementEntitlementsIndex < agreementEntitlementsJsonList.GetLength();
         ++agreementEntitlementsIndex) {
      m_agreementEntitlements.push_back(agreementEntitlementsJsonList[agreementEntitlementsIndex].AsObject());
    }
    m_agreementEntitlementsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
