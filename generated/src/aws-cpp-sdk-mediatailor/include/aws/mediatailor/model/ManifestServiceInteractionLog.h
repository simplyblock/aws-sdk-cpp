/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ManifestServiceExcludeEventType.h>
#include <aws/mediatailor/model/ManifestServicePublishOptInEventType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>Settings for customizing what events are included in logs for interactions
 * with the origin server.</p> <p>For more information about manifest service logs,
 * including descriptions of the event types, see <a
 * href="https://docs.aws.amazon.com/mediatailor/latest/ug/log-types.html">MediaTailor
 * manifest logs description and event types</a> in Elemental MediaTailor User
 * Guide.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ManifestServiceInteractionLog">AWS
 * API Reference</a></p>
 */
class ManifestServiceInteractionLog {
 public:
  AWS_MEDIATAILOR_API ManifestServiceInteractionLog() = default;
  AWS_MEDIATAILOR_API ManifestServiceInteractionLog(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API ManifestServiceInteractionLog& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates that MediaTailor will emit the selected events in the logs for
   * playback sessions that are initialized with this configuration. These events are
   * not emitted by default and must be explicitly opted in.</p>
   */
  inline const Aws::Vector<ManifestServicePublishOptInEventType>& GetPublishOptInEventTypes() const { return m_publishOptInEventTypes; }
  inline bool PublishOptInEventTypesHasBeenSet() const { return m_publishOptInEventTypesHasBeenSet; }
  template <typename PublishOptInEventTypesT = Aws::Vector<ManifestServicePublishOptInEventType>>
  void SetPublishOptInEventTypes(PublishOptInEventTypesT&& value) {
    m_publishOptInEventTypesHasBeenSet = true;
    m_publishOptInEventTypes = std::forward<PublishOptInEventTypesT>(value);
  }
  template <typename PublishOptInEventTypesT = Aws::Vector<ManifestServicePublishOptInEventType>>
  ManifestServiceInteractionLog& WithPublishOptInEventTypes(PublishOptInEventTypesT&& value) {
    SetPublishOptInEventTypes(std::forward<PublishOptInEventTypesT>(value));
    return *this;
  }
  inline ManifestServiceInteractionLog& AddPublishOptInEventTypes(ManifestServicePublishOptInEventType value) {
    m_publishOptInEventTypesHasBeenSet = true;
    m_publishOptInEventTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that MediaTailor won't emit the selected events in the logs for
   * playback sessions that are initialized with this configuration.</p>
   */
  inline const Aws::Vector<ManifestServiceExcludeEventType>& GetExcludeEventTypes() const { return m_excludeEventTypes; }
  inline bool ExcludeEventTypesHasBeenSet() const { return m_excludeEventTypesHasBeenSet; }
  template <typename ExcludeEventTypesT = Aws::Vector<ManifestServiceExcludeEventType>>
  void SetExcludeEventTypes(ExcludeEventTypesT&& value) {
    m_excludeEventTypesHasBeenSet = true;
    m_excludeEventTypes = std::forward<ExcludeEventTypesT>(value);
  }
  template <typename ExcludeEventTypesT = Aws::Vector<ManifestServiceExcludeEventType>>
  ManifestServiceInteractionLog& WithExcludeEventTypes(ExcludeEventTypesT&& value) {
    SetExcludeEventTypes(std::forward<ExcludeEventTypesT>(value));
    return *this;
  }
  inline ManifestServiceInteractionLog& AddExcludeEventTypes(ManifestServiceExcludeEventType value) {
    m_excludeEventTypesHasBeenSet = true;
    m_excludeEventTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ManifestServicePublishOptInEventType> m_publishOptInEventTypes;

  Aws::Vector<ManifestServiceExcludeEventType> m_excludeEventTypes;
  bool m_publishOptInEventTypesHasBeenSet = false;
  bool m_excludeEventTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
