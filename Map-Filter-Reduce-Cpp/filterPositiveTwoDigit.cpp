#include <iostream>
#include <deque>

#include "FilterGeneric.h"	//base
#include "filterPositiveTwoDigit.h"
using namespace std;

bool filterPositiveTwoDigit::f(int num)
{
	//do if positive digit
	if(num>0)
	{	
		//do if not 1 digit
		if((num/10)!=0)
		{
			//do if 2 digit
			if(((num/10)/10)== 0)
				return true;
		}
	}
	return false;
}
