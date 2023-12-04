#include "salePerMonth.h"
#include <iostream>

using namespace std;

void salePerMonth()
{
	int books,sumbooks=0,i=0;
	int allbooks[12]{0};
	const char* month[12] = { "Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	for (const char* m : month)
	{
		cout << m << ":____\b\b\b\b ";
		cin >> books;
		allbooks[i] = books;
		i++;
	}
	for (int j = 0; j < 12; j++)
	{
		sumbooks += allbooks[j];
	}
	cout << " : " << sumbooks << endl;
}