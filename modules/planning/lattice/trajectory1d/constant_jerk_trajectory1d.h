/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 **/

#ifndef MODULES_PLANNING_LATTICE_TRAJECTORY1D_CONSTANT_JERK_TRAJECTORY1D_H_
#define MODULES_PLANNING_LATTICE_TRAJECTORY1D_CONSTANT_JERK_TRAJECTORY1D_H_

#include <string>

#include "modules/planning/math/curve1d/curve1d.h"

namespace apollo {
namespace planning {

class ConstantJerkTrajectory1d : public Curve1d {
 public:
  ConstantJerkTrajectory1d(const double p0, const double v0, const double a0,
      const double p1, const double v1, const double a1, const double param);

  virtual ~ConstantJerkTrajectory1d() = default;

  double Evaluate(const std::uint32_t order,
                  const double param) const;

  double ParamLength() const;

  std::string ToString() const;

 private:
  double p0_;
  double v0_;
  double a0_;
  double jerk_;
};

}  // namespace planning
}  // namespace apollo

#endif
/* MODULES_PLANNING_LATTICE_TRAJECTORY1D_CONSTANT_JERK_TRAJECTORY1D_H_ */