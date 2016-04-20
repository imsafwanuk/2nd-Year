#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <deque>

class ReduceGeneric
{

public:


	//this function will take in a deque of integers and call the recursive function, find(), to
	//return an integer that meets the criteria.
	int reduce(std::deque<int>);

	//this function recursively compares each integer with its adjecent integer on the left.
	//then selects the one that meets the criteria and compares the selected integer with the next value on the left till then end.
	//the final value is stored in result.
	void find(std::deque<int>,int);

protected:

	//this will store the final integer after comparision finishes.
	int result;		

private:
	
	//this function will be overwritten and the input will be two integer
	//from which only the one that meets the specification will be returned.
	virtual int binary_operator(int,int)=0;

};
#endif
