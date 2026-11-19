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
namespace SecurityHub {
namespace Model {

/**
 */
class GenerateRecommendedPolicyV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API GenerateRecommendedPolicyV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GenerateRecommendedPolicyV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

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
  GenerateRecommendedPolicyV2Request& WithMetadataUid(MetadataUidT&& value) {
    SetMetadataUid(std::forward<MetadataUidT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataUid;
  bool m_metadataUidHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
