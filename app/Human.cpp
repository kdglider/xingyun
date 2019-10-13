/**Copyright (c) 2019 Hao Da (Kevin) Dong, Zuyang Cao, Jing Liang
 * @file       Human.cpp
 * @date       10/13/2019
 * @brief      The file Human.cpp implements the Human class.
 *             The class will be used in Xingyun class.
 * @license    This project is released under the BSD-3-Clause License.
 */
#pragma once

#include<iostream>
#include<vector>

class Human{
 public:
  /** @brief The centroid of a possible human obstacle. */
  std::vector<double> centroid;

  /** @brief The orientation angle of a possible human obstacle. */
  double orientationAngle;
};
