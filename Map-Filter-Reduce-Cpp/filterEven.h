#ifndef FILTEREVEN_H
#define FILTEREVEN_H
#include <deque>

//this class will filter a given input N, using the function filter(input), to select only even N
class filterEven: public FilterGeneric
{

public:
	
	//overwriting pure virtual function to select only even N
	bool f(int);
};
#endif
