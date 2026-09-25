#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse(){
  pos = 0;
  index = 0;
  trackLength = 0;
} // end of contructor

void Horse::advance(){
  int coin = rand() % 2;
  pos += coin;
} // end of advance

void Horse::printLane(){
  for (int pos = 0; pos < trackLength; pos++){
    if (pos == Horse::pos){
      std::cout << Horse::index;
    } else {
      std::cout << ".";
    } // end of if
  } // end of for
} // end of printLane

bool Horse::isWinner(){
  bool result = false;
  if (pos >= trackLength){
    result = true;
    std::cout << "Horse " << index << " Wins!!!" << std::endl;
  } // end of if
  return result;
} // end of isWinner

