#include <iostream>
#include "Check_string.h"
using namespace std;

int main()
{
	cout << "This program counts how many times the word occurs in the text.\n";
	cout << "Enter the text: ";
	string s;
	getline(cin, s);
	Check_string check;
	cout << "Enter the word: ";
	string word;
	getline(cin, word);
	cout << "Word occurs "<<check.word_count(s,word)<<" times.";
	system("pause");

}