/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AuthenticationProviderType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>The authentication configuration for an actor, specifying the provider type
 * and credentials.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Authentication">AWS
 * API Reference</a></p>
 */
class Authentication {
 public:
  AWS_SECURITYAGENT_API Authentication() = default;
  AWS_SECURITYAGENT_API Authentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Authentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of authentication provider. Valid values include SECRETS_MANAGER,
   * AWS_LAMBDA, AWS_IAM_ROLE, and AWS_INTERNAL.</p>
   */
  inline AuthenticationProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(AuthenticationProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline Authentication& WithProviderType(AuthenticationProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication value, such as a secret ARN, Lambda function ARN, or IAM
   * role ARN, depending on the provider type.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  Authentication& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  AuthenticationProviderType m_providerType{AuthenticationProviderType::NOT_SET};

  Aws::String m_value;
  bool m_providerTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
