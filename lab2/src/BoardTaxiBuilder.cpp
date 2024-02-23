#include <iostream>
#include "BoardTaxiBuilder.h"
#include "BoardTaxi.h"
#include "Adult.h"
#include "Child.h"
#include "TaxiDriver.h"

BoardTaxiBuilder::BoardTaxiBuilder(bool driver, int countOfAdults, int countOfChildren, bool safetyChildSeat) {
  this->driver = driver;
  this->countOfAdults = countOfAdults;
  this->countOfChildren = countOfChildren;
  this->countOfBeneficiaries = 0;
  this->safetyChildSeat = safetyChildSeat;
}

void BoardTaxiBuilder::CreateBoard() {
  this->p = new BoardTaxi(this->safetyChildSeat);
}

void BoardTaxiBuilder::BuildAdult() {
  for(int i = 0; i < this->countOfAdults; i++) {
    (this->p)->BoardPassanger(new Adult());
  }
}

void BoardTaxiBuilder::BuildChild() {
  if(!this->p->GetSafetyChildSeat() && this->countOfChildren) {
    return;
  }

  for(int i = 0; i < this->countOfChildren; i++) {
    (this->p)->BoardPassanger(new Child());
  }
}

void BoardTaxiBuilder::BuildBeneficiary() {}

void BoardTaxiBuilder::BuildDriver() {
  if(this->driver) {
    (this->p)->BoardDriver(new TaxiDriver());
  }
}
