#include <bits/stdc++.h>
using namespace std;

inline int gcd_new(int a, int b)
{
	int r;
	while (b > 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int x, int y)
{
	return (x * y) / gcd_new(x, y);
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << lcm(m, n);
	return 0;
}
