#include "BoardBuilder.h"

#pragma once

class BoardTaxiBuilder : public BoardBuilder {
private:
  bool safetyChildSeat;

public:
  BoardTaxiBuilder(bool driver = false, int countOfAdults = 0, int countOfChildren = 0, bool safetyChildSeat = false);
  void CreateBoard();
  void BuildAdult();
  void BuildChild();
  void BuildBeneficiary();
  void BuildDriver();
};
