#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
  const static int NUM_HORSES = 5;
  const int TRACK_LENGTH = 15;
  
  srand(time(NULL));
  int horses[NUM_HORSES] = {0};
}

void Race::startRace(){
  bool keepGoing = true;

  while(keepGoing){
    for (index = 0; index < NUM_HORSES; index++){
      Horse::printLane(index, horses);
      Horse::advance(index, horses);
      if (Horse::isWinner()){
        keepGoing = false;
	std::cout << "Horse " << index << " is the Winner!!!" << std::endl;
      } // end of if
    } // end of for
    std::cout << "Press Enter for next turn: ";
    std::cin.get();
  } // end of while
} // end of startrace()
