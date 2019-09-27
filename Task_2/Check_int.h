#pragma once
class Check_int
{
public:
	Check_int();
	~Check_int();
	// проверка на чётность
	 bool is_even(const int& x);
	// проверка на простое число
	 bool is_simple(const int& x);
	
	 // Для второго задание добавим ещё 2 проверки
	 
	 // Нахождение НОД
	 int g_c_d(int x, int y);
	 // Нахождение НОК
	 int l_c_m(const int& x, const int& y);
};

