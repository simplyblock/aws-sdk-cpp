/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/securityhub/model/GetRecommendedPolicyV2Result.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendedPolicyV2Result::GetRecommendedPolicyV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRecommendedPolicyV2Result& GetRecommendedPolicyV2Result::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommendationType")) {
    m_recommendationType = RecommendationTypeMapper::GetRecommendationTypeForName(jsonValue.GetString("RecommendationType"));
    m_recommendationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecommendationSteps")) {
    Aws::Utils::Array<JsonView> recommendationStepsJsonList = jsonValue.GetArray("RecommendationSteps");
    for (unsigned recommendationStepsIndex = 0; recommendationStepsIndex < recommendationStepsJsonList.GetLength();
         ++recommendationStepsIndex) {
      m_recommendationSteps.push_back(recommendationStepsJsonList[recommendationStepsIndex].AsObject());
    }
    m_recommendationStepsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
