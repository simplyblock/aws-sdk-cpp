/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/AgreementEntitlement.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

AgreementEntitlement::AgreementEntitlement(JsonView jsonValue) { *this = jsonValue; }

AgreementEntitlement& AgreementEntitlement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("registrationToken")) {
    m_registrationToken = jsonValue.GetString("registrationToken");
    m_registrationTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = AgreementEntitlementStatusMapper::GetAgreementEntitlementStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReasonCode")) {
    m_statusReasonCode =
        AgreementEntitlementStatusReasonCodeMapper::GetAgreementEntitlementStatusReasonCodeForName(jsonValue.GetString("statusReasonCode"));
    m_statusReasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("licenseArn")) {
    m_licenseArn = jsonValue.GetString("licenseArn");
    m_licenseArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AgreementEntitlement::Jsonize() const {
  JsonValue payload;

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_registrationTokenHasBeenSet) {
    payload.WithString("registrationToken", m_registrationToken);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", AgreementEntitlementStatusMapper::GetNameForAgreementEntitlementStatus(m_status));
  }

  if (m_statusReasonCodeHasBeenSet) {
    payload.WithString("statusReasonCode",
                       AgreementEntitlementStatusReasonCodeMapper::GetNameForAgreementEntitlementStatusReasonCode(m_statusReasonCode));
  }

  if (m_licenseArnHasBeenSet) {
    payload.WithString("licenseArn", m_licenseArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
