#include "BoardAnyCar.h"
#include "BoardBuilder.h"

#pragma once

class Director {
public:
  BoardAnyCar* CreateBoard(BoardBuilder* builder);
};
