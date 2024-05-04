#include "../lib/Database.h"

Database::Database() {}

Database::Database(std::vector<Group*> groups) {
  for (const Group* group : groups) {
    groupPerformance[group->getName()] = const_cast<Group*>(group);
  }
}

std::vector<Group*> Database::getGroups() {
  std::vector<Group*> allGroups;

  for (auto const& pair : groupPerformance) {
    allGroups.push_back(pair.second);
  }

  return allGroups;
}

void Database::updateGroup(std::string groupName, bool performance) {
  auto it = groupPerformance.find(groupName);
  if (it != groupPerformance.end()) {
    it->second->setPerformance(performance);
  }
}

void Database::addGroup(Group* group) {
  groupPerformance[group->getName()] = group;
}
