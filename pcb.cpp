#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, n, g, s, b, g1, b1, s1;
	cin >> a >> n;

	b = a / 100 % 10;
	s = a / 10 % 10;
	g = a % 10;

	g1 = n % 10;
	s1 = n / 10 % 10;
	b1 = n / 100 % 10;

	if (g == g1 and b == b1 and s == s1)
	{
		cout << "End";
	}
	else
		cout << "Error";
	// cout<<g1<<' '<<s1<<' '<<b1;
	return 0;
}
