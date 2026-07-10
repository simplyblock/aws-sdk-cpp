/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/RequestedTermConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

RequestedTermConfiguration::RequestedTermConfiguration(JsonView jsonValue) { *this = jsonValue; }

RequestedTermConfiguration& RequestedTermConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configurableUpfrontPricingTermConfiguration")) {
    m_configurableUpfrontPricingTermConfiguration = jsonValue.GetObject("configurableUpfrontPricingTermConfiguration");
    m_configurableUpfrontPricingTermConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("renewalTermConfiguration")) {
    m_renewalTermConfiguration = jsonValue.GetObject("renewalTermConfiguration");
    m_renewalTermConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("variablePaymentTermConfiguration")) {
    m_variablePaymentTermConfiguration = jsonValue.GetObject("variablePaymentTermConfiguration");
    m_variablePaymentTermConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestedTermConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_configurableUpfrontPricingTermConfigurationHasBeenSet) {
    payload.WithObject("configurableUpfrontPricingTermConfiguration", m_configurableUpfrontPricingTermConfiguration.Jsonize());
  }

  if (m_renewalTermConfigurationHasBeenSet) {
    payload.WithObject("renewalTermConfiguration", m_renewalTermConfiguration.Jsonize());
  }

  if (m_variablePaymentTermConfigurationHasBeenSet) {
    payload.WithObject("variablePaymentTermConfiguration", m_variablePaymentTermConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
