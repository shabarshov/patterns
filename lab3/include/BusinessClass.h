#include "./Unit.h"
#include <vector>

#pragma once

class BusinessClass : public Unit {
private:
  std::vector<Unit*> passangers;

public:
  static const int passangersLimit;
  static const int maxPassangersWeight;

  BusinessClass();
  BusinessClass(int countOfPassangers);

  void AddUnit(Unit* unit);

  int GetWeight();

  void Info();
};
