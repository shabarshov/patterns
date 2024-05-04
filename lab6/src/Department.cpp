#include <iostream>
#include "../lib/Department.h"

void Department::update() {
  processPerformanceUpdate();
}

void Department::subscribeToDeanOffice(DeanOffice* deanOffice) {
  deanOffice->attach(this);
}

void Department::processPerformanceUpdate() {
  std::cout << "Department has been notified about performance update." << std::endl;
}
