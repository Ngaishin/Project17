#include "carInfo.h"
#include <iostream>

using namespace std;

struct car
{
	string madename;
	int madeyear;
};

void catalogCars()
{
	int cars, year;
	string make;
	cout << "How many cars do you wish to catalog? ";
	cin >> cars;
	car* c = new car[cars];

	for (int i = 0; i < cars; ++i) 
	{
		cout << "Car #" << i+1 << endl;
		cout << "Please enter the make: ";
		cin >> c[i].madename;
		cout << "Please enter the year made: ";
		cin >> c[i].madeyear;
	}

	cout << "Here is your collection:\n";
	for (int i = 0; i < cars; i++)
	{
		cout << c[i].madeyear << " " << c[i].madename << endl;
	}

	delete[] c;

	cout << "finish!\n";
}
