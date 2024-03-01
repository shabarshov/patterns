#include "./Unit.h"
#include <vector>

#pragma once

class EconomyClass : public Unit {
private:
  std::vector<Unit*> passangers;

public:
  static const int passangersLimit;
  static const int maxPassangersWeight;

  EconomyClass();
  EconomyClass(int countOfPassangers, int availableWeight);

  void AddUnit(Unit* unit);

  int GetWeight();

  void Info();
};
