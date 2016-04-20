#include <iostream>
#include <deque>

#include "ReduceGeneric.h"

using namespace std;


int ReduceGeneric::reduce(deque<int> deq)
{

	//calling recursive function with deq and its length
	find(deq,deq.size()-1);
	return result;
}

//int i is the index that will start from the length of deque till 0
void ReduceGeneric::find(deque<int> deq, int i)
{
	if(i == 0)
	{
		//the value at index 0 is the final selected value.
		result = binary_operator(deq[1],deq[0]);
		return;
	}
	
	//overwriting the i-1 index with the selected value and continues to do so.
	deq[i-1] = binary_operator(deq[i],deq[i-1]);
	return find(deq,i-1);
}

