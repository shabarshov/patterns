#include <iostream>
#include "../lib/DeanOffice.h"

DeanOffice::DeanOffice(const std::vector<Group*> groups) {
  database = Database(groups);
}

void DeanOffice::attach(Observer* observer) {
  observers.push_back(observer);
}

void DeanOffice::detach(Observer* observer) {
  for (auto it = observers.begin(); it != observers.end(); ++it) {
    if (*it == observer) {
      observers.erase(it);
      break;
    }
  }
}

void DeanOffice::notify() {
  for (Observer* observer : observers) {
    observer->update();
  }
}

void DeanOffice::getGroupsPerformance() {
  std::vector<Group*> groups = database.getGroups();

  for(int i = 0; i < groups.size(); i++) {
    std::cout << groups[i]->getName() << ": " << groups[i]->getPerformance() << std::endl;
  }
}

void DeanOffice::setGroupPerformance(Group* group, bool performance) {
  database.updateGroup(group->getName(), performance);
  notify();
}
