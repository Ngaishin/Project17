#include "sumTwoInt.h"
#include <iostream>

using namespace std;

void sumTwoInt()
{
	int a, b;
	cout << "Enter two int:\n";
	cin >> a >> b;
	if (a > b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
	int total = 0;
	if (a == b)
		total = a + b;
	else
		for (; a <= b; ++a)
		{
			total += a;
		}
	cout << "total: " << total << endl;
}

void sumTwoInt(int a, int b)
{
	if (a > b)
	{
		a ^= b;
		b ^= a;
		a ^= b;
	}
	int total = 0;
	if (a == b)
		total = a + b;
	else
		for (; a <= b; ++a)
		{
			total += a;
		}
	cout << "total: " << total << endl;
}