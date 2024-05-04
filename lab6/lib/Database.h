#ifndef DATABASE_H
#define DATABASE_H

#include <string>
#include <vector>
#include <unordered_map>

#include "Group.h"

class Database {
private:
  std::unordered_map<std::string, Group*> groupPerformance;

public:
  Database();

  Database(std::vector<Group*> groups);

  std::vector<Group*> getGroups();

  void updateGroup(std::string, bool);

  void addGroup(Group*);
};

#endif // DATABASE_H
