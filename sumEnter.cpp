#include "sumEnter.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void sumEnter()
{
	float f;
	float sum = 0;
	while (1)
	{
		cin >> f;
		sum += f;
		if (f == 0)break;
		cout << "sum: " << sum << endl;
	}

}
