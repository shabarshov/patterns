#include "Director.h"

BoardAnyCar* Director::CreateBoard(BoardBuilder* builder) {
  builder->CreateBoard();
  builder->BuildAdult();
  builder->BuildChild();
  builder->BuildBeneficiary();
  builder->BuildDriver();

  return builder->GetBoard();
}
