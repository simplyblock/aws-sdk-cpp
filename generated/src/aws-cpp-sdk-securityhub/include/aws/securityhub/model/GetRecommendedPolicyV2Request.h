/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SecurityHub {
namespace Model {

/**
 */
class GetRecommendedPolicyV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API GetRecommendedPolicyV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecommendedPolicyV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier (ID) of Security Hub OCSF findings found under the
   * <code>metadata.uid</code> field of the finding.</p>
   */
  inline const Aws::String& GetMetadataUid() const { return m_metadataUid; }
  inline bool MetadataUidHasBeenSet() const { return m_metadataUidHasBeenSet; }
  template <typename MetadataUidT = Aws::String>
  void SetMetadataUid(MetadataUidT&& value) {
    m_metadataUidHasBeenSet = true;
    m_metadataUid = std::forward<MetadataUidT>(value);
  }
  template <typename MetadataUidT = Aws::String>
  GetRecommendedPolicyV2Request& WithMetadataUid(MetadataUidT&& value) {
    SetMetadataUid(std::forward<MetadataUidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token used to paginate the <code>RecommendationSteps</code> list
   * returned. On your first call to <code>GetRecommendedPolicyV2</code>, omit this
   * parameter or set it to <code>NULL</code>. For subsequent calls, use the
   * <code>NextToken</code> value returned in the previous response to retrieve the
   * next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetRecommendedPolicyV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of recommendation steps to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetRecommendedPolicyV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataUid;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_metadataUidHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
