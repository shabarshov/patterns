#include "../lib/Group.h"

Group::Group(std::string name, bool performance) {
  this->name = name;
  this->performance = performance;
}

std::string Group::getName() const {
  return name;
}

bool Group::getPerformance() {
  return performance;
}

void Group::setPerformance(bool performance) {
  this->performance = performance;
}
