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
	// Метод подсчитывает количество слов в предлжении
	//  количество слов определяется по количеству пробелов
	int count(const string& s);	
	// Этот метод сортирует слова в алфавитном порядке
	string sort(const string& s);
	// Этот метод делают первую букву каждого слова в 
	// предложении заглавной
	string up_words(const string& s);

};

