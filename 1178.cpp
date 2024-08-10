#include <bits/stdc++.h>
using namespace std;
int n, a[10];
int main()
{
	cin >> n;
	for (int i = 1, k; i <= n; i++)
	{
		k = i;
		while (k)
			a[k % 10]++, k /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << a[i] << endl;
	return 0;
}
