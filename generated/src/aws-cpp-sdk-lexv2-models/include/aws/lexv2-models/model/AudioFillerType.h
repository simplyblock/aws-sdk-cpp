/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Model {
enum class AudioFillerType {
  NOT_SET,
  MELODY_CHIPPER_CHIME,
  MELODY_CURIOUS_CRAWL,
  MELODY_RISING_RIPPLE,
  MELODY_PATIENT_PING,
  MELODY_PONDERING_PONG,
  TYPING_KINETIC_KEYS,
  TYPING_QUIET_QWERTY
};

namespace AudioFillerTypeMapper {
AWS_LEXMODELSV2_API AudioFillerType GetAudioFillerTypeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAudioFillerType(AudioFillerType value);
}  // namespace AudioFillerTypeMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
