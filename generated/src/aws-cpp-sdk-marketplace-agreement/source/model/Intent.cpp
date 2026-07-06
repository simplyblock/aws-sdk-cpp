/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/Intent.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace IntentMapper {

static const int NEW__HASH = HashingUtils::HashString("NEW");
static const int AMEND_HASH = HashingUtils::HashString("AMEND");
static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");

Intent GetIntentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NEW__HASH) {
    return Intent::NEW_;
  } else if (hashCode == AMEND_HASH) {
    return Intent::AMEND;
  } else if (hashCode == REPLACE_HASH) {
    return Intent::REPLACE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Intent>(hashCode);
  }

  return Intent::NOT_SET;
}

Aws::String GetNameForIntent(Intent enumValue) {
  switch (enumValue) {
    case Intent::NOT_SET:
      return {};
    case Intent::NEW_:
      return "NEW";
    case Intent::AMEND:
      return "AMEND";
    case Intent::REPLACE:
      return "REPLACE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IntentMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
