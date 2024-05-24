#ifndef INCLUDE_RAYTRACE_COLOR_H_
#define INCLUDE_RAYTRACE_COLOR_H_

#include <iostream>

#include "vec3.h"

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {
  auto r = pixel_color.x();
  auto g = pixel_color.y();
  auto b = pixel_color.z();

  int rbyte = int(255.999 * r);
  int gbyte = int(255.999 * g);
  int bbyte = int(255.999 * b);

  out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif  // INCLUDE_RAYTRACE_COLOR_H_
