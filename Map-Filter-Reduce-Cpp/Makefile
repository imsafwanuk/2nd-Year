all: compile-01

compile-01: main.cpp MapGeneric.o MapTriple.o MapAbsoluteValue.o MapSquare.o FilterGeneric.o filterEven.o filterPositive.o filterPositiveTwoDigit.o ReduceGeneric.o ReduceMinimum.o ReduceGCD.o
	g++ -o compile-01 main.cpp MapGeneric.o MapTriple.o MapAbsoluteValue.o MapSquare.o FilterGeneric.o filterEven.o filterPositive.o filterPositiveTwoDigit.o ReduceGeneric.o ReduceMinimum.o ReduceGCD.o

MapGeneric.o: MapGeneric.h MapGeneric.cpp
	g++ -c MapGeneric.cpp

MapTriple.o: MapTriple.h MapTriple.cpp
	g++ -c MapTriple.cpp

MapAbsoluteValue.o: MapAbsoluteValue.h MapAbsoluteValue.cpp
	g++ -c MapAbsoluteValue.cpp

MapSquare.o: MapSquare.h MapSquare.cpp
	g++ -c MapSquare.cpp



FilterGeneric.o: FilterGeneric.h FilterGeneric.cpp
	g++ -c FilterGeneric.cpp

filterEven.o: filterEven.h filterEven.cpp
	g++ -c filterEven.cpp

filterPositive.o: filterPositive.h filterPositive.cpp
	g++ -c filterPositive.cpp

filterPositiveTwoDigit.o: filterPositiveTwoDigit.h filterPositiveTwoDigit.cpp
	g++ -c filterPositiveTwoDigit.cpp



ReduceGeneric.o: ReduceGeneric.h ReduceGeneric.cpp
	g++ -c ReduceGeneric.cpp

ReduceMinimum.o: ReduceMinimum.h ReduceMinimum.cpp
	g++ -c ReduceMinimum.cpp

ReduceGCD.o: ReduceGCD.h ReduceGCD.cpp
	g++ -c ReduceGCD.cpp


clean:
	rm -f *.o compile-01
