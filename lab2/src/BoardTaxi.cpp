#include <iostream>
#include "BoardTaxi.h"

BoardTaxi::BoardTaxi(bool safetyChildSeat) {
  this->passangersLimit = 3;
  this->safetyChildSeat = safetyChildSeat;
}

void BoardTaxi::PrintInfo() {
  this->BoardAnyCar::PrintInfo();
  if(this->safetyChildSeat) {
    std::cout << "There is a child safety seat in this taxi" << std::endl;
  } else {
    std::cout << "There is no child safety seat in this taxi" << std::endl;
  }
}
