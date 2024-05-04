#include <iostream>
#include <vector>

#include "../lib/Group.h"
#include "../lib/Database.h"
#include "../lib/DeanOffice.h"
#include "../lib/Department.h"
#include "../lib/Teacher.h"

int main() {
  Group* group1 = new Group("Group 1", false);
  Group* group2 = new Group("Group 2", true);
  std::vector<Group*> groups = {group1, group2};

  DeanOffice deanOffice(groups);

  Department department;

  Teacher teacher1(&deanOffice, group1);
  Teacher teacher2(&deanOffice, group2);

  deanOffice.attach(&department);
  deanOffice.attach(&teacher1);
  deanOffice.attach(&teacher2);

  std::cout << "Before update:" << std::endl;
  deanOffice.getGroupsPerformance();
  std::cout << std::endl;

  teacher1.setPerformance(true);
  teacher2.setPerformance(false);

  std::cout << std::endl;
  std::cout << "After update:" << std::endl;
  deanOffice.getGroupsPerformance();

  delete group1;
  delete group2;

  return 0;
}
