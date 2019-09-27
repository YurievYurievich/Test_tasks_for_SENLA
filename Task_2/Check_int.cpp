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

 int Check_int::g_c_d( int x,  int y)
{
	 while (x != y)
	 {
		 if (x > y)
			 x -= y;
		 else
			 y -= x;
	 }
	 return x;
}

 int Check_int::l_c_m(const int& x, const int& y)
 {
	 return x * y / g_c_d(x, y);
 }
