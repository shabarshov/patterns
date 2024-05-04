#include <iostream>
#include "../lib/Teacher.h"
#include "../lib/DeanOffice.h"

Teacher::Teacher(DeanOffice* deanOffice, Group* group) {
  this->deanOffice = deanOffice;
  this->group = group;
}

void Teacher::update() {
  std::cout << "Teacher has been notified" << std::endl;
}

void Teacher::setPerformance(bool performance) {
  group->setPerformance(performance);
  deanOffice->setGroupPerformance(group, group->getPerformance());
}
