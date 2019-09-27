#pragma once
#include<string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;
class Check_string
{
public:
	Check_string();
	~Check_string();
	int count(const string& s);	
	string sort(const string& s);
	string up_words(const string& s);
	// Добавляем в наш класс метод для посчёта слов
	int word_count( string& str, string& word);

};

