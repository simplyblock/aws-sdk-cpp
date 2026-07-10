/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MediaTailor {
namespace Model {

/**
 */
class DeleteFunctionRequest : public MediaTailorRequest {
 public:
  AWS_MEDIATAILOR_API DeleteFunctionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteFunction"; }

  AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the function to delete.</p>
   */
  inline const Aws::String& GetFunctionId() const { return m_functionId; }
  inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }
  template <typename FunctionIdT = Aws::String>
  void SetFunctionId(FunctionIdT&& value) {
    m_functionIdHasBeenSet = true;
    m_functionId = std::forward<FunctionIdT>(value);
  }
  template <typename FunctionIdT = Aws::String>
  DeleteFunctionRequest& WithFunctionId(FunctionIdT&& value) {
    SetFunctionId(std::forward<FunctionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionId;
  bool m_functionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
