#include "Check_int.h"



Check_int::Check_int()
{
}


Check_int::~Check_int()
{
}

 bool Check_int::is_even(const int &x)
{
	return (x%2==0);
}

 bool Check_int::is_simple(const int &x)
{
	for (int i = 2; i < 10; i++)
	{
		if (!(x==i) && (x%i==0))
			return false;
	}

	return true;
}


