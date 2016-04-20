#include <iostream>
#include <deque>
using namespace std;

#include "ReduceGeneric.h"	//base
#include "ReduceGCD.h"


int ReduceGCD::binary_operator(int i, int j)
{
	int r = i%j;
	if(r == 0)
	{
		return j;
	}
	return binary_operator(j,r);
}
