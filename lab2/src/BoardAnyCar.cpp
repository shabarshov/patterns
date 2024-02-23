#include <iostream>
#include "BoardAnyCar.h"

BoardAnyCar::BoardAnyCar() {
  this->driver = nullptr;
};

void BoardAnyCar::BoardPassanger(Passanger* passanger) {
  if(passangers.size() < passangersLimit) {
    passangers.push_back(passanger);
  } else {
    std::cout << "The vehicle is already full" << std::endl;
  }
}

void BoardAnyCar::BoardDriver(Driver* driver) {
  this->driver = driver;
}

bool BoardAnyCar::IsReady() {
  if(!this->driver || this->passangers.size() == 0) {
    return false;
  }

  return true;
}

void BoardAnyCar::PrintInfo() {
  std::cout << "Driver: ";
  if(this->driver) {
    driver->PrintInfo();
  } else {
    std::cout << "Empty" << std::endl;
  }

  std::cout << "Passangers:" << std::endl;
  for(int i = 0; i < passangers.size(); i++) {
    passangers[i]->PrintInfo();
  }
}

void BoardAnyCar::SetSafetyChildSeat() {
  this->safetyChildSeat = true;
}

bool BoardAnyCar::GetSafetyChildSeat() {
  return this->safetyChildSeat;
}
