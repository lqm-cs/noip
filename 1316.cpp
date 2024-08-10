#include <bits/stdc++.h>
using namespace std;

int main()
{
	double m, n;
	cin >> m >> n;
	int a[1001];
	int num = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		num += a[i];
	}
	cout << fixed << setprecision(1);
	cout << num / n * m;
	return 0;
}
