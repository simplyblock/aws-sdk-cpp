/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

namespace Aws {
namespace VPCLattice {
namespace Model {
enum class ResourceConfigDnsResolution { NOT_SET, IN_VPC, PUBLIC_ };

namespace ResourceConfigDnsResolutionMapper {
AWS_VPCLATTICE_API ResourceConfigDnsResolution GetResourceConfigDnsResolutionForName(const Aws::String& name);

AWS_VPCLATTICE_API Aws::String GetNameForResourceConfigDnsResolution(ResourceConfigDnsResolution value);
}  // namespace ResourceConfigDnsResolutionMapper
}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
