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
enum class Intent { NOT_SET, NEW_, AMEND, REPLACE };

namespace IntentMapper {
AWS_AGREEMENTSERVICE_API Intent GetIntentForName(const Aws::String& name);

AWS_AGREEMENTSERVICE_API Aws::String GetNameForIntent(Intent value);
}  // namespace IntentMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
