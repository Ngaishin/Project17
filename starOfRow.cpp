#include "starOfRow.h"
#include <iostream>

using namespace std;

void numOfStars()
{
	int num;
	cout << "Enter number of rows: ";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		for (int j = 0; j <= num; j++)
		{
			if (j < num - i)
				cout << ".";
			else
				cout << "*";
		}
		putchar(10);
	}
}