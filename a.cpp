#include <bits/stdc++.h>
using namespace std;

/*int max(int a, int b)
{
	int c;
	cin >> c;
	for (int i = 0; i <= c; i++)
		max(a++, b++);
	return max(a, b);
}*/

double powx(double x, double y)
{
	double result = 1.0;
	while (y > 0)
	{
		result *= x;
		y--;
	}
	return result;
}

int main()
{
	double a,b;
	cin >> a >> b;
	double c= powx(a,b);
	cout << c;
	return 0;
}