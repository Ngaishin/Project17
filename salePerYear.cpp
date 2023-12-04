#include "salePerYear.h"
#include <iostream>

using namespace std;

void salePerYear()
{
	int books, pybooks=0,sumbooks = 0, i = 0, t = 0;
	int tyBooks[3][12]{};

	const char* month[12] = { "Jan", "Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	const char* year[3] = { "first","second","third" };

	for (const char* y : year)
	{
		cout << "Sales in the " << y << " year:\n";
		for (const char* m : month)
		{
			cout << m << ":____\b\b\b\b ";
			cin >> books;
			tyBooks[t][i] = books;
			i++;
		}
		i = 0;
		t++;
	}
	
	for (int j = 0; j < 3; ++j)
	{
		for (int k = 0; k < 12; k++)
		{
			pybooks += tyBooks[j][k];
		}
		sumbooks += pybooks;
		cout << "Year: " << j+1 << "\tsaled :" << pybooks << endl;
		pybooks = 0;
	}
	cout << "Three-year sales summary: " << sumbooks << endl;
}