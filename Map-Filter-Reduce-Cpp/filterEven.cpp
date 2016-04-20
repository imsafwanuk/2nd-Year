#include <iostream>
#include <deque>

#include "FilterGeneric.h"	//base
#include "filterEven.h"
using namespace std;

bool filterEven::f(int num)
{
	return (num%2 == 0);
}
