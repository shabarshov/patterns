#include "./Unit.h"

#pragma once

class Passanger : public Unit {
public:
  Passanger() = delete;

  Passanger(int weight, std::pair<int, int> place);

  int GetWeight();

  void SetWeight(int weight);
};
