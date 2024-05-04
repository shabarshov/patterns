#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Observer.h"
#include "DeanOffice.h"

class Department : public Observer {
private:
  void processPerformanceUpdate();

public:
  void update() override;

  void subscribeToDeanOffice(DeanOffice*);
};

#endif // DEPARTMENT_H
