#include "../include/FirstClass.h"
#include "../include/Passanger.h"
#include "../include/random.h"
#include <iostream>

const int FirstClass::passangersLimit = 10;
const int FirstClass::maxPassangersWeight = 60;

FirstClass::FirstClass() {}

FirstClass::FirstClass(int countOfPassangers) {
  for(int i = 0; i < countOfPassangers && i < FirstClass::passangersLimit; i++) {
    std::pair<int, int> passangerPlace(i, i);
    this->AddUnit(new Passanger(getRandomNumber(5, FirstClass::maxPassangersWeight), passangerPlace));
  }
}

void FirstClass::AddUnit(Unit* unit) {
  passangers.push_back(unit);
}

int FirstClass::GetWeight() {
  int sum = 0;

  for(int i = 0; i < this->passangers.size(); i++) {
    sum += passangers[i]->GetWeight();
  }

  return sum;
}

void FirstClass::Info() {
  std::cout << "First class:" << std::endl;

  for(int i = 0; i < this->passangers.size(); i++) {
    passangers[i]->Info();
  }
}
