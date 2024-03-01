#include <iostream>
#include "../include/Plane.h"
#include "../include/random.h"

int main() {
  srand(time(NULL));
  
  Plane plane(60, 30, 30);

  plane.Info();

  return 0;
}
