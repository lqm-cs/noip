#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, g, s, b, ans;
	cin >> n;
	g = n % 10;
	s = n / 10 % 10;
	b = n / 100;
	ans = g * 100 + (s * 10) + b;
	cout << ans;
	return 0;
}
