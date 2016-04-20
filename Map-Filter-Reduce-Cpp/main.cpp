#include <iostream>
#include <deque>
#include <stdio.h>	//scanf,printf
#include <algorithm>
#include <sstream> 	//istringstream
using namespace std;
//maps
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
//filters
#include "FilterGeneric.h"
#include "filterEven.h"
#include "filterPositive.h"
#include "filterPositiveTwoDigit.h"
//reduce
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

int main()
{
	deque<int> L,L1,L2;
	int i;
	string line;
  getline(cin,line);
	if(line.size() == 0)
		return 0;

  line.erase(remove(line.begin(), line.end(), ','), line.end());
  istringstream s(line);
  while(s>>i)
  {
     L.push_back(i);
  }
	if(L.size() != 20)
			return 0;	

	//converting L -> 3*|L| aka L1
	MapTriple triple;	MapAbsoluteValue abs;
	L1 = triple.map(abs.map(L));

	//converting L1 -> positive two digit integers -> even intergers aka L2
	filterEven even; filterPositiveTwoDigit p2;
	
	L2 = p2.filter(L1);
	if(L2.size() <2)
			return 0;

	L2 = even.filter(L2);
	if(L2.size() <2)
			return 0;	

	//finding the minimum and GCD from L2 respectively
	ReduceMinimum min; ReduceGCD gcd;
	printf("%d %d\n",min.reduce(L2),gcd.reduce(L2));

	
}
