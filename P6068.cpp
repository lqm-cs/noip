#include <iostream>
#include <cmath>
using namespace std;

int gcd(int n)
{
	if (n < 6)
	{
		return -1;
	}
	int i, ykb;
	ykb = sqrt(n);
	for (i = 6; i <= ykb; ++i)
	{
		if (!(n % i))
		{
			return n / i;
		}
	}
	for (i = min(n / 6, 5);; --i)
	{
		if (!(n % i))
		{
			return i;
		}
	}
}
int main()
{
	int n, a, i;
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cin >> a;
		cout << gcd(a) << endl;
	}
	return 0;
}