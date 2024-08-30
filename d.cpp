#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a[10000], ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if ((a[i] + a[i + 1] + a[i + 2]) == (a[i] + a[i + 1] + a[i + 2]))
			ans++;
	}
	cout << n - ans;
	return 0;
}
