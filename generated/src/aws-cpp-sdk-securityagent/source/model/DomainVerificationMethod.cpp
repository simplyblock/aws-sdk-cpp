/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityagent/model/DomainVerificationMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {
namespace DomainVerificationMethodMapper {

static const int DNS_TXT_HASH = HashingUtils::HashString("DNS_TXT");
static const int HTTP_ROUTE_HASH = HashingUtils::HashString("HTTP_ROUTE");
static const int PRIVATE_VPC_HASH = HashingUtils::HashString("PRIVATE_VPC");

DomainVerificationMethod GetDomainVerificationMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DNS_TXT_HASH) {
    return DomainVerificationMethod::DNS_TXT;
  } else if (hashCode == HTTP_ROUTE_HASH) {
    return DomainVerificationMethod::HTTP_ROUTE;
  } else if (hashCode == PRIVATE_VPC_HASH) {
    return DomainVerificationMethod::PRIVATE_VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DomainVerificationMethod>(hashCode);
  }

  return DomainVerificationMethod::NOT_SET;
}

Aws::String GetNameForDomainVerificationMethod(DomainVerificationMethod enumValue) {
  switch (enumValue) {
    case DomainVerificationMethod::NOT_SET:
      return {};
    case DomainVerificationMethod::DNS_TXT:
      return "DNS_TXT";
    case DomainVerificationMethod::HTTP_ROUTE:
      return "HTTP_ROUTE";
    case DomainVerificationMethod::PRIVATE_VPC:
      return "PRIVATE_VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DomainVerificationMethodMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
