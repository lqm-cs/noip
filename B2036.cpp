#include<iostream>
using namespace std;

int main()
{
	double a;
	cin >> a;
	if (a < 0)
	{
		a = -a;
		printf_s("%.2f", a);
	}
	else
	{
		printf_s("%.2f", a);
	}
	return 0;
}