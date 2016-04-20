#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <deque>

//this class will map a given input N, using the function map(input), to  |N|
class MapAbsoluteValue: public MapGeneric
{

public:

	//overwriting pure virtual function making N -> |N|
	int f(int);

private:

};
#endif
