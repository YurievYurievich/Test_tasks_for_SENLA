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
	// ���� ������ ����� � ���������
	int integer();
	int integer(int min, int max);
private:


};
// ������� ������ ����� ����� ������
// �.� ���� ��������� �� ���� ��������
// ��� ������ ����������� ������������� 
extern Input input;
#endif 