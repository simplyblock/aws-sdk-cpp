/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/S3TablesIntegration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

S3TablesIntegration::S3TablesIntegration(JsonView jsonValue) { *this = jsonValue; }

S3TablesIntegration& S3TablesIntegration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasourceName")) {
    m_datasourceName = jsonValue.GetString("datasourceName");
    m_datasourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasourceType")) {
    m_datasourceType = jsonValue.GetString("datasourceType");
    m_datasourceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesIntegration::Jsonize() const {
  JsonValue payload;

  if (m_datasourceNameHasBeenSet) {
    payload.WithString("datasourceName", m_datasourceName);
  }

  if (m_datasourceTypeHasBeenSet) {
    payload.WithString("datasourceType", m_datasourceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
