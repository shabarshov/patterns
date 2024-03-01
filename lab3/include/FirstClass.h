#include "./Unit.h"
#include <vector>

#pragma once

class FirstClass : public Unit {
private:
  std::vector<Unit*> passangers;

public:
  static const int passangersLimit;
  static const int maxPassangersWeight;

  FirstClass();
  FirstClass(int countOfPassangers);

  void AddUnit(Unit* unit);

  int GetWeight();

  void Info();
};
