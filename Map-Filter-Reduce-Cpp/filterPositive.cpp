#include <iostream>
#include <deque>

#include "FilterGeneric.h"	//base
#include "filterPositive.h"
using namespace std;

bool filterPositive::f(int num)
{
	return (num>0);
}
