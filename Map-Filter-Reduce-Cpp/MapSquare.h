#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <deque>

//this class will map a given input N, using the function map(input), to N^2
class MapSquare: public MapGeneric
{

public:
	
	//overwriting pure virtual function making N -> N^2
	int f(int);
};
#endif
