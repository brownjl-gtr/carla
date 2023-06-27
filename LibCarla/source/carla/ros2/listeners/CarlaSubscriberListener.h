// Copyright (c) 2022 Computer Vision Center (CVC) at the Universitat Autonoma de Barcelona (UAB).
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once
#define _GLIBCXX_USE_CXX11_ABI 0

#include <memory>

namespace carla {
namespace ros2 {

  class CarlaSubscriberListenerImpl;

  class CarlaSubscriberListener {
    public:
      CarlaSubscriberListener();
      ~CarlaSubscriberListener();
      CarlaSubscriberListener(const CarlaSubscriberListener&) = delete;
      CarlaSubscriberListener& operator=(const CarlaSubscriberListener&) = delete;
      CarlaSubscriberListener(CarlaSubscriberListener&&) = delete;
      CarlaSubscriberListener& operator=(CarlaSubscriberListener&&) = delete;

      std::unique_ptr<CarlaSubscriberListenerImpl> _impl;
  };
}
}
