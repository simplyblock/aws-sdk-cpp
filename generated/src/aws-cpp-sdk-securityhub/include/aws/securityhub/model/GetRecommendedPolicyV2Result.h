/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RecommendationError.h>
#include <aws/securityhub/model/RecommendationStatus.h>
#include <aws/securityhub/model/RecommendationStep.h>
#include <aws/securityhub/model/RecommendationType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class GetRecommendedPolicyV2Result {
 public:
  AWS_SECURITYHUB_API GetRecommendedPolicyV2Result() = default;
  AWS_SECURITYHUB_API GetRecommendedPolicyV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API GetRecommendedPolicyV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The pagination token to use to request the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetRecommendedPolicyV2Result& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of recommendation for the finding.</p>
   */
  inline RecommendationType GetRecommendationType() const { return m_recommendationType; }
  inline void SetRecommendationType(RecommendationType value) {
    m_recommendationTypeHasBeenSet = true;
    m_recommendationType = value;
  }
  inline GetRecommendedPolicyV2Result& WithRecommendationType(RecommendationType value) {
    SetRecommendationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recommended steps to take to resolve the finding.</p>
   */
  inline const Aws::Vector<RecommendationStep>& GetRecommendationSteps() const { return m_recommendationSteps; }
  template <typename RecommendationStepsT = Aws::Vector<RecommendationStep>>
  void SetRecommendationSteps(RecommendationStepsT&& value) {
    m_recommendationStepsHasBeenSet = true;
    m_recommendationSteps = std::forward<RecommendationStepsT>(value);
  }
  template <typename RecommendationStepsT = Aws::Vector<RecommendationStep>>
  GetRecommendedPolicyV2Result& WithRecommendationSteps(RecommendationStepsT&& value) {
    SetRecommendationSteps(std::forward<RecommendationStepsT>(value));
    return *this;
  }
  template <typename RecommendationStepsT = RecommendationStep>
  GetRecommendedPolicyV2Result& AddRecommendationSteps(RecommendationStepsT&& value) {
    m_recommendationStepsHasBeenSet = true;
    m_recommendationSteps.emplace_back(std::forward<RecommendationStepsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed information for a <code>FAILED</code> retrieval status.</p>
   */
  inline const RecommendationError& GetError() const { return m_error; }
  template <typename ErrorT = RecommendationError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = RecommendationError>
  GetRecommendedPolicyV2Result& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the recommended policy retrieval.</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetRecommendedPolicyV2Result& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the resource of the finding.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  GetRecommendedPolicyV2Result& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetRecommendedPolicyV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  RecommendationType m_recommendationType{RecommendationType::NOT_SET};

  Aws::Vector<RecommendationStep> m_recommendationSteps;

  RecommendationError m_error;

  RecommendationStatus m_status{RecommendationStatus::NOT_SET};

  Aws::String m_resourceArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_recommendationTypeHasBeenSet = false;
  bool m_recommendationStepsHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
