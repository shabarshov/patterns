#include <iostream>

#include "Child.h"
#include "Adult.h"
#include "Beneficiary.h"

#include "Director.h"
#include "BoardAnyCar.h"
#include "BoardBusBuilder.h"
#include "BoardTaxiBuilder.h"

int main() {
  Director director;
  BoardBusBuilder busBuilder(true, 0, 0, 0);
  BoardTaxiBuilder taxiBuilder(true, 2, 1, false);

  BoardAnyCar* boardBus = director.CreateBoard(&busBuilder);
  BoardAnyCar* boardTaxi = director.CreateBoard(&taxiBuilder);

  boardBus->PrintInfo();
  boardTaxi->PrintInfo();

  std::cout << boardBus->IsReady() << std::endl;
  std::cout << boardTaxi->IsReady() << std::endl;

  return 0;
}
