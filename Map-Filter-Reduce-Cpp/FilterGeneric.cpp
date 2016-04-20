#include <iostream>
#include <deque>

#include "FilterGeneric.h"

using namespace std;


deque<int> FilterGeneric::filter(deque<int> deq)
{
	//calling recursive function with deq and its length
	select(deq,deq.size()-1);
	return filterDeq;
}

//int i is the index that will start from the length of deque till 0
void FilterGeneric::select(deque<int> deq, int i)
{
	if(i == 0)
	{
		bool val = f(deq[i]);
		if(val)
			filterDeq.push_front(deq[i]);

		return;
	}

	bool val = f(deq[i]);
	if(val)
		filterDeq.push_front(deq[i]);

	return select(deq,i-1);
}

