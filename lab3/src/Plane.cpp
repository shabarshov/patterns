#include "../include/Plane.h"
#include "../include/Passanger.h"
#include "../include/random.h"
#include <iostream>

const int Plane::maxWeight = 1300;

Plane::Plane(int economyClassSize, int businessClassSize, int firstClassSize) {
  this->firstClass = new FirstClass(firstClassSize);
  this->businessClass = new BusinessClass(businessClassSize);
  this->economyClass = new EconomyClass(economyClassSize, Plane::maxWeight - firstClass->GetWeight() - businessClass->GetWeight());

  for(int i = 0; i < 2; i++) {
    this->pilots.push_back(new Pilot());
  }

  for(int i = 0; i < 6; i++) {
    this->stewardesses.push_back(new Stewardess());
  }
}

int Plane::GetWeight() {
  return this->firstClass->GetWeight() + this->businessClass->GetWeight() + this->economyClass->GetWeight();
}

void Plane::Info() {
  std::cout << "Plane's max weight: " << Plane::maxWeight << std::endl;
  std::cout << "Current weight: " << this->GetWeight() << std::endl;

  this->firstClass->Info();
  this->businessClass->Info();
  this->economyClass->Info();
}
