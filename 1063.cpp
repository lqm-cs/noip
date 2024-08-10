#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
int main()
{
	cin >> m >> n;
	if (m == 1)
	{
		m++;
	}
	for (int i = m; i <= n; i++)
	{
		bool flag = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
