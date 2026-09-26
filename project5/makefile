horseRace: main.o horse.o race.o
	g++ -g main.o horse.o race.o -o horseRace

main.o: main.cpp horse.h race.o
	g++ -g -c main.cpp

horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp

race.o: race.cpp race.o horse.o
	g++ -g -c race.cpp

run: horseRace
	./horseRace

clean:
	rm horseRace
	rm *.o

debug: horseRace
	gdb horseRace
	
