#include "BoardAnyCar.h"

#pragma once

class BoardTaxi : public BoardAnyCar {
public:
  BoardTaxi(bool safetyChildSeat = false);

  void PrintInfo();
};
