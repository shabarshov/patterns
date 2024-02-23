#include "BoardBuilder.h"

BoardBuilder::BoardBuilder() {
  this->p = nullptr;
}

BoardAnyCar* BoardBuilder::GetBoard() {
  return this->p;
}
