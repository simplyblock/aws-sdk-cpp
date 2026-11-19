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
enum class TaxEstimation { NOT_SET, DISABLED, ENABLED };

namespace TaxEstimationMapper {
AWS_AGREEMENTSERVICE_API TaxEstimation GetTaxEstimationForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForTaxEstimation(TaxEstimation value);
}  // namespace TaxEstimationMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
