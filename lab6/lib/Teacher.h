#ifndef TEACHER_H
#define TEACHER_H

#include <string>

#include "Observer.h"
#include "Group.h"
#include "DeanOffice.h"

class Teacher : public Observer {
private:
  DeanOffice* deanOffice;
  Group* group;


public:
  void update();
  
  Teacher(DeanOffice*, Group*);

  void setPerformance(bool);
};

#endif // TEACHER_H
