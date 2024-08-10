#include <bits/stdc++.h>
using namespace std;

bool ispre(int x)
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if (ispre(n))
	{
		cout << "Yes";
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (n % i == 0)
				cout << i << endl;
		}
	}
	return 0;
}
