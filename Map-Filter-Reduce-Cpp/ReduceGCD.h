#ifndef REDUCEGCD_H
#define REDUCEGCD_H

//this class will reduce a given list of N inputs, using the function reduce(input), to calculate the greatest common divisor.
class ReduceGCD: public ReduceGeneric
{

public:
	
	//overwriting pure virtual function to calculate and return the GCD of the 2 inputs.
	int binary_operator(int,int);
};
#endif
