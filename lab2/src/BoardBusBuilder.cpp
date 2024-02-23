#include "BoardBusBuilder.h"
#include "BoardBus.h"
#include "Adult.h"
#include "Child.h"
#include "Beneficiary.h"
#include "BusDriver.h"

BoardBusBuilder::BoardBusBuilder(bool driver, int countOfAdults, int countOfChildren, int countOfBeneficiaries) {
  this->driver = driver;
  this->countOfAdults = countOfAdults;
  this->countOfChildren = countOfChildren;
  this->countOfBeneficiaries = countOfBeneficiaries;
}

void BoardBusBuilder::CreateBoard() {
  this->p = new BoardBus();
}

void BoardBusBuilder::BuildAdult() {
  for(int i = 0; i < this->countOfAdults; i++) {
    (this->p)->BoardPassanger(new Adult());
  }
}

void BoardBusBuilder::BuildChild() {
  for(int i = 0; i < this->countOfChildren; i++) {
    (this->p)->BoardPassanger(new Child());
  }
}

void BoardBusBuilder::BuildBeneficiary() {
  for(int i = 0; i < this->countOfBeneficiaries; i++) {
    (this->p)->BoardPassanger(new Beneficiary());
  }
}

void BoardBusBuilder::BuildDriver() {
  if(this->driver) {
    (this->p)->BoardDriver(new BusDriver());
  }
}
