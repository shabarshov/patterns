#include "../include/random.h"

int getRandomNumber(int min, int max) {
  return rand() % (max - min + 1) + min;
}
