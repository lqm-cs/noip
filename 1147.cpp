#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n;
	double a = 1, b = 1, c, d, sum = 0;
	cin >> n;
	if (n >= 1 && n <= 30)
		for (i = 1; i <= n; i++)
		{
			d = a / b;
			sum += d;
			c = a;
			a = b;
			b = c + a;
		}
	cout << fixed << setprecision(3) << sum;
	return 0;
}
