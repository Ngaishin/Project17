#include "invest.h"
#include <iostream>

using namespace std;

void invest()
{
	float dap = 100, cle = 100;
	int Y;
	for (int year = 1;
		(dap += 10) > (cle *= (1 + 0.05));
		++year)
	{
		Y = year;
		//cout << "years: " << year << endl;
		//cout << "dap  : " << dap << endl;
		//cout << "cle  : " << cle << endl;
		//cout << "--------------\n";
	}
	cout << "==============\n";
	cout << "|" << "years: "<< Y + 1 <<"\t\b\b\b\b | \n";
	cout << "|" << "dap: " << (dap += 10) << "\t\b\b\b|" << endl;
	cout << "|" << "cls: " << (cle *= (1 + 0.05)) << "|" << endl;
	cout << "==============\n";

}