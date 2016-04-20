#ifndef FILTERPOSITIVE_H
#define FILTERPOSITIVE_H
#include <deque>

//this class will filter a given input N, using the function filter(input), to give N>0
class filterPositive: public FilterGeneric
{

public:
	
	//overwriting pure virtual function to select only N>0
	bool f(int);
};
#endif
