#include "Check_string.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "This program counts the number of words in a string, displays"
		"the string in sorted form, and makes the first letter of each word uppercase\n";
	Check_string check;
	cout << "Enter strng:";
	string s;
	getline(cin,s);
	cout << "\nNumber of words: "<<check.count(s);
	cout << "\nSorted string: " << check.up_words(check.sort(s)) << endl;
	system("pause");

}

