#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

//this class will reduce a given list of N inputs, using the function reduce(input), to select the minimum value.
class ReduceMinimum: public ReduceGeneric
{

public:
	
	//overwriting pure virtual function to return the minimum value out of the 2 inputs.
	int binary_operator(int,int);
};
#endif
