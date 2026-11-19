/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/AudioFillerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace AudioFillerTypeMapper {

static const int MELODY_CHIPPER_CHIME_HASH = HashingUtils::HashString("MELODY_CHIPPER_CHIME");
static const int MELODY_CURIOUS_CRAWL_HASH = HashingUtils::HashString("MELODY_CURIOUS_CRAWL");
static const int MELODY_RISING_RIPPLE_HASH = HashingUtils::HashString("MELODY_RISING_RIPPLE");
static const int MELODY_PATIENT_PING_HASH = HashingUtils::HashString("MELODY_PATIENT_PING");
static const int MELODY_PONDERING_PONG_HASH = HashingUtils::HashString("MELODY_PONDERING_PONG");
static const int TYPING_KINETIC_KEYS_HASH = HashingUtils::HashString("TYPING_KINETIC_KEYS");
static const int TYPING_QUIET_QWERTY_HASH = HashingUtils::HashString("TYPING_QUIET_QWERTY");

AudioFillerType GetAudioFillerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MELODY_CHIPPER_CHIME_HASH) {
    return AudioFillerType::MELODY_CHIPPER_CHIME;
  } else if (hashCode == MELODY_CURIOUS_CRAWL_HASH) {
    return AudioFillerType::MELODY_CURIOUS_CRAWL;
  } else if (hashCode == MELODY_RISING_RIPPLE_HASH) {
    return AudioFillerType::MELODY_RISING_RIPPLE;
  } else if (hashCode == MELODY_PATIENT_PING_HASH) {
    return AudioFillerType::MELODY_PATIENT_PING;
  } else if (hashCode == MELODY_PONDERING_PONG_HASH) {
    return AudioFillerType::MELODY_PONDERING_PONG;
  } else if (hashCode == TYPING_KINETIC_KEYS_HASH) {
    return AudioFillerType::TYPING_KINETIC_KEYS;
  } else if (hashCode == TYPING_QUIET_QWERTY_HASH) {
    return AudioFillerType::TYPING_QUIET_QWERTY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AudioFillerType>(hashCode);
  }

  return AudioFillerType::NOT_SET;
}

Aws::String GetNameForAudioFillerType(AudioFillerType enumValue) {
  switch (enumValue) {
    case AudioFillerType::NOT_SET:
      return {};
    case AudioFillerType::MELODY_CHIPPER_CHIME:
      return "MELODY_CHIPPER_CHIME";
    case AudioFillerType::MELODY_CURIOUS_CRAWL:
      return "MELODY_CURIOUS_CRAWL";
    case AudioFillerType::MELODY_RISING_RIPPLE:
      return "MELODY_RISING_RIPPLE";
    case AudioFillerType::MELODY_PATIENT_PING:
      return "MELODY_PATIENT_PING";
    case AudioFillerType::MELODY_PONDERING_PONG:
      return "MELODY_PONDERING_PONG";
    case AudioFillerType::TYPING_KINETIC_KEYS:
      return "TYPING_KINETIC_KEYS";
    case AudioFillerType::TYPING_QUIET_QWERTY:
      return "TYPING_QUIET_QWERTY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AudioFillerTypeMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
