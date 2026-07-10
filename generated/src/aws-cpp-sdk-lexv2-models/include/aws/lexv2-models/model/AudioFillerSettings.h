/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AudioFillerType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LexModelsV2 {
namespace Model {

/**
 * <p>Configuration that plays background filler audio during speech-to-speech
 * interactions to mask processing delays and improve the perceived responsiveness
 * of the bot.</p> <p>Audio filler requires <code>unifiedSpeechSettings</code>
 * (speech-to-speech) to be enabled on the bot locale when <code>enabled</code> is
 * <code>true</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AudioFillerSettings">AWS
 * API Reference</a></p>
 */
class AudioFillerSettings {
 public:
  AWS_LEXMODELSV2_API AudioFillerSettings() = default;
  AWS_LEXMODELSV2_API AudioFillerSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API AudioFillerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether audio filler playback is enabled for the bot locale. Set to
   * <code>true</code> to play filler audio while Amazon Lex processes a user
   * utterance. Set to <code>false</code> to disable filler audio.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline AudioFillerSettings& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the audio filler to play while Amazon Lex processes the
   * user's input. This field is required when <code>enabled</code> is
   * <code>true</code>.</p>
   */
  inline AudioFillerType GetAudioType() const { return m_audioType; }
  inline bool AudioTypeHasBeenSet() const { return m_audioTypeHasBeenSet; }
  inline void SetAudioType(AudioFillerType value) {
    m_audioTypeHasBeenSet = true;
    m_audioType = value;
  }
  inline AudioFillerSettings& WithAudioType(AudioFillerType value) {
    SetAudioType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in milliseconds, to wait after the end of the user's utterance
   * before starting audio filler playback. Valid range is <code>500</code> to
   * <code>5000</code> milliseconds. If not specified, Amazon Lex uses a default of
   * <code>2500</code> milliseconds.</p>
   */
  inline int GetStartDelayInMilliseconds() const { return m_startDelayInMilliseconds; }
  inline bool StartDelayInMillisecondsHasBeenSet() const { return m_startDelayInMillisecondsHasBeenSet; }
  inline void SetStartDelayInMilliseconds(int value) {
    m_startDelayInMillisecondsHasBeenSet = true;
    m_startDelayInMilliseconds = value;
  }
  inline AudioFillerSettings& WithStartDelayInMilliseconds(int value) {
    SetStartDelayInMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum time, in milliseconds, that audio filler plays once it has
   * started, even if the bot response becomes ready sooner. Valid range is
   * <code>1000</code> to <code>5000</code> milliseconds. If not specified, Amazon
   * Lex uses a default of <code>3000</code> milliseconds.</p>
   */
  inline int GetMinimumPlayDurationInMilliseconds() const { return m_minimumPlayDurationInMilliseconds; }
  inline bool MinimumPlayDurationInMillisecondsHasBeenSet() const { return m_minimumPlayDurationInMillisecondsHasBeenSet; }
  inline void SetMinimumPlayDurationInMilliseconds(int value) {
    m_minimumPlayDurationInMillisecondsHasBeenSet = true;
    m_minimumPlayDurationInMilliseconds = value;
  }
  inline AudioFillerSettings& WithMinimumPlayDurationInMilliseconds(int value) {
    SetMinimumPlayDurationInMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The silent delay, in milliseconds, inserted between the end of audio filler
   * playback and the start of the bot's response. Valid range is <code>200</code> to
   * <code>1000</code> milliseconds. If not specified, Amazon Lex uses a default of
   * <code>500</code> milliseconds.</p>
   */
  inline int GetResponseDeliveryDelayInMilliseconds() const { return m_responseDeliveryDelayInMilliseconds; }
  inline bool ResponseDeliveryDelayInMillisecondsHasBeenSet() const { return m_responseDeliveryDelayInMillisecondsHasBeenSet; }
  inline void SetResponseDeliveryDelayInMilliseconds(int value) {
    m_responseDeliveryDelayInMillisecondsHasBeenSet = true;
    m_responseDeliveryDelayInMilliseconds = value;
  }
  inline AudioFillerSettings& WithResponseDeliveryDelayInMilliseconds(int value) {
    SetResponseDeliveryDelayInMilliseconds(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  AudioFillerType m_audioType{AudioFillerType::NOT_SET};

  int m_startDelayInMilliseconds{0};

  int m_minimumPlayDurationInMilliseconds{0};

  int m_responseDeliveryDelayInMilliseconds{0};
  bool m_enabledHasBeenSet = false;
  bool m_audioTypeHasBeenSet = false;
  bool m_startDelayInMillisecondsHasBeenSet = false;
  bool m_minimumPlayDurationInMillisecondsHasBeenSet = false;
  bool m_responseDeliveryDelayInMillisecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
