/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/TaxBreakdownItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

TaxBreakdownItem::TaxBreakdownItem(JsonView jsonValue) { *this = jsonValue; }

TaxBreakdownItem& TaxBreakdownItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rate")) {
    m_rate = jsonValue.GetString("rate");
    m_rateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue TaxBreakdownItem::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_rateHasBeenSet) {
    payload.WithString("rate", m_rate);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
