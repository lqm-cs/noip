#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, a[100];
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	for (int i = m - 1; i >= 0; i--)
	{
		cout << a[i];
		if (i != 0)
			cout << ' ';
	}
}
