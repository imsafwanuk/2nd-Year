#include <iostream>
#include <deque>

#include "MapGeneric.h"

using namespace std;


deque<int> MapGeneric::map(deque<int> deq)
{
	//calling recursive function with deq and its length
	calculate(deq,deq.size()-1);
	return mapDeq;
}

//int i is the index that will start from the length of deque till 0
void MapGeneric::calculate(deque<int> deq, int i)
{
	if(i == 0)
	{
		int val = f(deq[i]);
		mapDeq.push_front(val);
		return;
	}
	
	int val = f(deq[i]);
	mapDeq.push_front(val);
	return calculate(deq,i-1);
}

