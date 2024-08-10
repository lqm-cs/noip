#include<iostream>
using namespace std;

int main()
{
	double a, b, c, d;
	cin >> a;
	b = a * 0.9;
	c = a * 0.8;
	d = (a + b + c) / 3;
	printf_s("%.1f", d);
	return 0;
}