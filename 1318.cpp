#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long m, n, num = 0;
	cin >> m >> n;
	long long s = m * n;
	for (int i = 2; i <= sqrt(s); i++)
	{
		if (s % i == 0)
		{
			num++;
		}
	}
	cout << num - 1;
	return 0;
}
