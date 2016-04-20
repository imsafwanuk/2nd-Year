#ifndef FILTERPOSITIVETWODIGIT_H
#define FILTERPOSITIVETWODIGIT_H
#include <deque>

//this class will filter a given input N, using the function filter(input), to give only N>0 and are of two digits
class filterPositiveTwoDigit: public FilterGeneric
{

public:
	
	//overwriting pure virtual function to select only N>0 and are of two digits
	bool f(int);
};
#endif
