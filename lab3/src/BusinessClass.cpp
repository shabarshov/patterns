#include "../include/BusinessClass.h"
#include "../include/Passanger.h"
#include "../include/random.h"
#include <iostream>

const int BusinessClass::passangersLimit = 20;
const int BusinessClass::maxPassangersWeight = 35;

BusinessClass::BusinessClass() {}

BusinessClass::BusinessClass(int countOfPassangers) {
  for(int i = 0; i < countOfPassangers && i < BusinessClass::passangersLimit; i++) {
    std::pair<int, int> passangerPlace(i, i);
    this->AddUnit(new Passanger(getRandomNumber(5, BusinessClass::maxPassangersWeight), passangerPlace));
  }
}

void BusinessClass::AddUnit(Unit* unit) {
  passangers.push_back(unit);
}

int BusinessClass::GetWeight() {
  int sum = 0;

  for(int i = 0; i < this->passangers.size(); i++) {
    sum += passangers[i]->GetWeight();
  }

  return sum;
}

void BusinessClass::Info() {
  std::cout << "Business class:" << std::endl;

  for(int i = 0; i < this->passangers.size(); i++) {
    passangers[i]->Info();
  }
}
