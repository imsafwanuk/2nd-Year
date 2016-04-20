#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <deque>

class FilterGeneric
{

public:


	//this function will take in a deque of integers and call the recursive function, select(), to
	//return a new deque of integers with the wanted transformation.
	std::deque<int> filter(std::deque<int>);

	//this function will recursively filter values from the input deque and store it in filterDeq
	//it will take in a deque(that contains the original integers from user and
	//it will also take in an index(which will be decreasing by 1 every call), and
	//perform boolen operation on each integer of the input deque to select the desired value.
	void select(std::deque<int>,int);

protected:

	//this deque will store the integers after filtration.
	std::deque<int> filterDeq;		

private:
	
	//this function will be overwritten and the input will be an integer
	//that will either be selected or discarded after its specific boolen operation.
	virtual bool f(int)=0;

};
#endif
