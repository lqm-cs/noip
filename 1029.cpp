#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, g, s, b, q, t;
	cin >> n;
	q = n / 1000;
	b = n / 100 % 10;
	s = n / 10 % 10;
	g = n % 10;
	// cout<<q<<' '<<b<<' '<<s<<' '<<g<<' ';
	t = q + (b * 10) + (s * 100) + (g * 1000);
	cout << t;
	return 0;
}
