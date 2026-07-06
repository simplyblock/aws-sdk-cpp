/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53domains/model/TLDInMaintenance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Domains {
namespace Model {

TLDInMaintenance::TLDInMaintenance(JsonView jsonValue) { *this = jsonValue; }

TLDInMaintenance& TLDInMaintenance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tld")) {
    m_tld = jsonValue.GetString("tld");
    m_tldHasBeenSet = true;
  }
  return *this;
}

JsonValue TLDInMaintenance::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_tldHasBeenSet) {
    payload.WithString("tld", m_tld);
  }

  return payload;
}

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws
