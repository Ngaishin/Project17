#include "wordCnt.h"
#include <iostream>
#include <cstring>

using namespace std;

void countWrd()
{
	char ch[1024];
	int t{ 0 };
	cout << "Enter words (to stop, type the word done)\n";
	while (strcmp(ch,"done"))
	{
		cin >> ch;
		t++;
	/*	cout << "strcmp(ch,haha)" << strcmp(ch, "haha") << endl;
		cout << "strcmp(ch,done)" << strcmp(ch, "done") << endl;*/
	}
	cout << "You entered a total of " << t-1 << " words.\n";

}