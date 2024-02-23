#include "BoardAnyCar.h"

#pragma once

class BoardBuilder {
protected:
  BoardAnyCar* p;
  int countOfAdults;
  int countOfChildren;
  int countOfBeneficiaries;
  bool driver;

public:
  BoardBuilder();
  virtual void CreateBoard() = 0;
  virtual void BuildAdult() = 0;
  virtual void BuildChild() = 0;
  virtual void BuildBeneficiary() = 0;
  virtual void BuildDriver() = 0;
  virtual BoardAnyCar* GetBoard();
};
