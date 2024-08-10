#include <iostream>
using namespace std;

long long x;
char c;
long long a = 0;

int main()
{
	cin >> x >> c;
	if (x <= 1000)
	{
		a = 8;
	}
	else
	{
		a += 8;
		x -= 1000;
		a += x / 500 * 4;
		if (x % 500 != 0)
		{
			a += 4;
		}
	}
	if (c == 'y')
	{
		a += 5;
	}
	if (c == 'n')
	{
		a += 0;
	}
	cout << a;
	return 0;
}
