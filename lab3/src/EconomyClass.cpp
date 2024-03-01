#include "../include/EconomyClass.h"
#include "../include/Passanger.h"
#include "../include/random.h"
#include <iostream>

const int EconomyClass::passangersLimit = 150;
const int EconomyClass::maxPassangersWeight = 20;

EconomyClass::EconomyClass() {}

EconomyClass::EconomyClass(int countOfPassangers, int availableWeight) {
  for(int i = 0; i < countOfPassangers && i < EconomyClass::passangersLimit; i++) {
    int currentWeight = getRandomNumber(5, EconomyClass::maxPassangersWeight);
    std::pair<int, int> passangerPlace(i, i);
    
    if(availableWeight - currentWeight > 0) {
      this->AddUnit(new Passanger(currentWeight, passangerPlace));
      availableWeight -= currentWeight;
    } else {
      this->AddUnit(new Passanger(0, passangerPlace));
    }
  }
}

void EconomyClass::AddUnit(Unit* unit) {
  passangers.push_back(unit);
}

int EconomyClass::GetWeight() {
  int sum = 0;

  for(int i = 0; i < this->passangers.size(); i++) {
    sum += passangers[i]->GetWeight();
  }

  return sum;
}

void EconomyClass::Info() {
  std::cout << "Economy class:" << std::endl;

  for(int i = 0; i < this->passangers.size(); i++) {
    passangers[i]->Info();
  }
}
