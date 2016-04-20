#include <iostream>
#include <deque>
using namespace std;

#include "ReduceGeneric.h"	//base
#include "ReduceMinimum.h"


int ReduceMinimum::binary_operator(int i, int j)
{
	return (i<j)? i:j ;
}
