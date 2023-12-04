#include "wordCntString.h"
#include <iostream>
#include <string>

using namespace std;

void countWordString()
{
	string str;
	int t{ 0 };
	cout << "Enter words (to stop, type the word done)\n";
	while (str.compare("done"))
	{
		cin >> str;
		t++;
		/*	cout << "strcmp(ch,haha)" << strcmp(ch, "haha") << endl;
			cout << "strcmp(ch,done)" << strcmp(ch, "done") << endl;*/
	}
	cout << "You entered a total of " << t - 1 << " words.\n";
}