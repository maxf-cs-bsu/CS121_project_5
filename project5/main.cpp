#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"

void testHorse();

int main(){
  srand(time(NULL));

  std::cout << "Horse" << std::endl;

  testHorse();

  return 0;
}

void testHorse(){
  Horse h;
  bool keepGoing = true;
  while(keepGoing){
    h.advance();
    h.printLane();
    if (h.isWinner()){
      keepGoing = false;
    } // end of if
  } // end of keepGoing
} // printLane test
