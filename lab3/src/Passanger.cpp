#include "../include/Passanger.h"

Passanger::Passanger(int weight, std::pair<int, int> place) {
  this->weight = weight;
}

int Passanger::GetWeight() {
  return this->weight;
}

void Passanger::SetWeight(int weight) {
  this->weight = weight;
}
