/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/MediaLive_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * Connection details for a single pipeline of a MediaConnect Router
 * output.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaConnectRouterOutputConnection">AWS
 * API Reference</a></p>
 */
class MediaConnectRouterOutputConnection {
 public:
  AWS_MEDIALIVE_API MediaConnectRouterOutputConnection() = default;
  AWS_MEDIALIVE_API MediaConnectRouterOutputConnection(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaConnectRouterOutputConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The ARN of the MediaConnect Router Input connected to this pipeline.
   */
  inline const Aws::String& GetRouterInputArn() const { return m_routerInputArn; }
  inline bool RouterInputArnHasBeenSet() const { return m_routerInputArnHasBeenSet; }
  template <typename RouterInputArnT = Aws::String>
  void SetRouterInputArn(RouterInputArnT&& value) {
    m_routerInputArnHasBeenSet = true;
    m_routerInputArn = std::forward<RouterInputArnT>(value);
  }
  template <typename RouterInputArnT = Aws::String>
  MediaConnectRouterOutputConnection& WithRouterInputArn(RouterInputArnT&& value) {
    SetRouterInputArn(std::forward<RouterInputArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_routerInputArn;
  bool m_routerInputArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
