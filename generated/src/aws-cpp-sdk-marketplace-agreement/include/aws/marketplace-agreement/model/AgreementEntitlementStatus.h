/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace AgreementService {
namespace Model {
enum class AgreementEntitlementStatus { NOT_SET, PROVISIONED, SCHEDULED, PENDING, FAILED, DEPROVISIONED };

namespace AgreementEntitlementStatusMapper {
AWS_AGREEMENTSERVICE_API AgreementEntitlementStatus GetAgreementEntitlementStatusForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForAgreementEntitlementStatus(AgreementEntitlementStatus value);
}  // namespace AgreementEntitlementStatusMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
