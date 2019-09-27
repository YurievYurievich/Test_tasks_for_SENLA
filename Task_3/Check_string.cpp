#include "Check_string.h"



Check_string::Check_string()
{
}


Check_string::~Check_string()
{
}

int Check_string::count(const string& s)
{
	int counter(0);
	for (auto& ch : s)
	{
		if (ch == ' ')
			counter++;
	}
	return  counter+1;
}

string Check_string::sort(const string& s)
{
	vector<string> words;
	stringstream stream(s);
	string word;
	while (stream >> word)
	{
		words.push_back(word);
	}
	std::sort(words.begin(), words.end());
	word.clear();
	for (auto& i:words)
	{
		word += i + ' ';
	}
	return (word);
		
}

string Check_string::up_words(const string& s)
{
	vector<string> words;
	stringstream stream(s);
	string word;
	while (stream >> word)
	{
		words.push_back(word);
	}
	for (auto& i:words)
	{
		i[0] = toupper(i[0]);
	}
	word.clear();
	for (auto& i : words)
	{
		word += i + ' ';
	}
	return (word);
}
