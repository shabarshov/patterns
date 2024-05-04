#ifndef DEAN_OFFICE_H
#define DEAN_OFFICE_H

#include <vector>
#include <string>

#include "Subject.h"
#include "Observer.h"
#include "Database.h"
#include "Group.h"

class DeanOffice : public Subject {
private:
  std::vector<Observer*> observers;
  Database database;

public:
  DeanOffice(const std::vector<Group*> groups);

  void attach(Observer* observer) override;
  void detach(Observer* observer) override;
  void notify() override;

  void getGroupsPerformance();
  void setGroupPerformance(Group*, bool performance);
};

#endif // DEAN_OFFICE_H
