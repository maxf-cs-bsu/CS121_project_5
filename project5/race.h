#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
  private:
    int NUM_HORSES;
    int TRACK_LENGTH;
    Horse horses[NUM_HORSES];
  public:
    Race();
    void startRace();
};

#endif
