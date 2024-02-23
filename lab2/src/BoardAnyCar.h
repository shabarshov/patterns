#include <vector>
#include "Driver.h"
#include "Passanger.h"

#pragma once

class BoardAnyCar {
protected:
  Driver* driver;
  std::vector<Passanger*> passangers;
  int passangersLimit;
  bool safetyChildSeat;

public:
  BoardAnyCar();

  void BoardPassanger(Passanger* passanger);

  void BoardDriver(Driver* driver);

  bool IsReady();

  virtual void PrintInfo();

  virtual void SetSafetyChildSeat();

  virtual bool GetSafetyChildSeat();
};
