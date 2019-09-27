#ifndef Input_H
#include <iostream>
#include <limits>
#define Input_H
#pragma once
class Input
{
public:
	Input();
	~Input();
	// Ввод целого числа с проверкой
	 int integer();
private:


};
// Заранее создаём обект этого класса
// т.к ввод необходим во всех заданиях
// нет смысла дублировать инициализацию 
extern Input input;
#endif 