/*原数是1379，那么每位加5对10取余数的结果为6824，然后颠倒该数，得到新数：4286*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, g, s, b, q, t;
	cin >> n;
	q = (n / 1000 + 5) % 10;
	b = (n / 100 % 10 + 5) % 10;
	s = (n / 10 % 10 + 5) % 10;
	g = (n % 10 + 5) % 10;
	// cout<<q<<' '<<b<<' '<<s<<' '<<g<<' ';
	t = q + (b * 10) + (s * 100) + (g * 1000);
	cout << t;
	return 0;
}
