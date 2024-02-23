#include "BoardBuilder.h"

#pragma once

class BoardBusBuilder : public BoardBuilder {
public:
  BoardBusBuilder(bool driver = false, int countOfAdults = 0, int countOfChildren = 0, int countOfBeneficiaries = 0);
  void CreateBoard();
  void BuildAdult();
  void BuildChild();
  void BuildBeneficiary();
  void BuildDriver();
};
