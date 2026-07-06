/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/ExpectedCharge.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ExpectedCharge::ExpectedCharge(JsonView jsonValue) { *this = jsonValue; }

ExpectedCharge& ExpectedCharge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("time")) {
    m_time = jsonValue.GetDouble("time");
    m_timeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amountAfterTax")) {
    m_amountAfterTax = jsonValue.GetString("amountAfterTax");
    m_amountAfterTaxHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timing")) {
    m_timing = TimingMapper::GetTimingForName(jsonValue.GetString("timing"));
    m_timingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedTaxes")) {
    m_estimatedTaxes = jsonValue.GetObject("estimatedTaxes");
    m_estimatedTaxesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExpectedCharge::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_timeHasBeenSet) {
    payload.WithDouble("time", m_time.SecondsWithMSPrecision());
  }

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_amountAfterTaxHasBeenSet) {
    payload.WithString("amountAfterTax", m_amountAfterTax);
  }

  if (m_timingHasBeenSet) {
    payload.WithString("timing", TimingMapper::GetNameForTiming(m_timing));
  }

  if (m_estimatedTaxesHasBeenSet) {
    payload.WithObject("estimatedTaxes", m_estimatedTaxes.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
