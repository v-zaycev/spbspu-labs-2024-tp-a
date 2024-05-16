#ifndef COMMANDS_HPP
#define COMMANDS_HPP
#include <iostream>
#include <list>
#include "shape.hpp"

namespace zaitsev
{
  std::ostream& area_cmd(std::istream& in, std::ostream& out, std::list< Polygon >& shapes);
  std::ostream& max_cmd(std::istream& in, std::ostream& out, std::list< Polygon >& shapes);
  std::ostream& min_cmd(std::istream& in, std::ostream& out, std::list< Polygon >& shapes);
  std::ostream& count_cmd(std::istream& in, std::ostream& out, std::list< Polygon >& shapes);
  std::ostream& lessarea_cmd(std::istream& in, std::ostream& out, std::list< Polygon >& shapes);
  std::ostream& inframe_cmd(std::istream& in, std::ostream& out, std::list< Polygon >& shapes);
}
#endif