#include "./Unit.h"
#include "./EconomyClass.h"
#include "./BusinessClass.h"
#include "./FirstClass.h"
#include "./Stewardess.h"
#include "./Pilot.h"
#include <vector>

#pragma once

class Plane : public Unit {
private:
  EconomyClass* economyClass;
  BusinessClass* businessClass;
  FirstClass* firstClass;
  std::vector<Pilot*> pilots;
  std::vector<Stewardess*> stewardesses;

public:
  static const int maxWeight;

  Plane() = delete;

  Plane(int economyClassSize, int businessClassSize, int firstClassSize);

  int GetWeight();

  void Info();
};
