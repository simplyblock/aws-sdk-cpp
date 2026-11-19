/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lexv2-models/model/AudioFillerSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {

AudioFillerSettings::AudioFillerSettings(JsonView jsonValue) { *this = jsonValue; }

AudioFillerSettings& AudioFillerSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enabled")) {
    m_enabled = jsonValue.GetBool("enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audioType")) {
    m_audioType = AudioFillerTypeMapper::GetAudioFillerTypeForName(jsonValue.GetString("audioType"));
    m_audioTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDelayInMilliseconds")) {
    m_startDelayInMilliseconds = jsonValue.GetInteger("startDelayInMilliseconds");
    m_startDelayInMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumPlayDurationInMilliseconds")) {
    m_minimumPlayDurationInMilliseconds = jsonValue.GetInteger("minimumPlayDurationInMilliseconds");
    m_minimumPlayDurationInMillisecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseDeliveryDelayInMilliseconds")) {
    m_responseDeliveryDelayInMilliseconds = jsonValue.GetInteger("responseDeliveryDelayInMilliseconds");
    m_responseDeliveryDelayInMillisecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue AudioFillerSettings::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("enabled", m_enabled);
  }

  if (m_audioTypeHasBeenSet) {
    payload.WithString("audioType", AudioFillerTypeMapper::GetNameForAudioFillerType(m_audioType));
  }

  if (m_startDelayInMillisecondsHasBeenSet) {
    payload.WithInteger("startDelayInMilliseconds", m_startDelayInMilliseconds);
  }

  if (m_minimumPlayDurationInMillisecondsHasBeenSet) {
    payload.WithInteger("minimumPlayDurationInMilliseconds", m_minimumPlayDurationInMilliseconds);
  }

  if (m_responseDeliveryDelayInMillisecondsHasBeenSet) {
    payload.WithInteger("responseDeliveryDelayInMilliseconds", m_responseDeliveryDelayInMilliseconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
