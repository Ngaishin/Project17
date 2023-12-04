#include "arraryObj.h"
#include <iostream>
#include <array>

using namespace std;

void arraryObj()
{
	array<long double, 101> ald;
	ald[0] = ald[1] = 1;
	for (int i = 2; i < 101; i++)
	{
		ald[i] = i * ald[i - 1];
	}
	for (int i = 0; i < 101; i++)
	{
		cout << i << "!\t\b\b\b\b= " << ald[i] << endl;
	}
}