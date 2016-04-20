#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <deque>

class MapGeneric
{

public:


	//this function will take in a deque of integers and call the recursive function, calculate(), to
	//return a new deque of integers with the wanted transformation.
	std::deque<int> map(std::deque<int>);

	//this function will recursively calculate the values in key-value pair and store it in mapDeq
	//it will take in a deque(that contains the original integers from user and
	//it will also take in an index(which will be decreasing by 1 every call), and
	//perform operation on each integer of the input deque to produced the desired transfromation.
	void calculate(std::deque<int>,int);

protected:

	//this deque will store the values in key-values pairs after transformation.
	std::deque<int> mapDeq;		

private:
	
	//this function will be overwritten and the input will be the integer
	//that will needs to be transformed into a specific value.
	virtual int f(int)=0;

};
#endif
