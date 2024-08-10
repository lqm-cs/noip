#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n, a[100] = {0};
	cin >> n;
	a[0] = 1;
	for (int i = 1; i < 33; i++)
		a[i] = a[i - 1] * 2;
	for (int i = 3; i < 33; i++)
	{
		if (n - a[i] < a[i + 1] - n || n - a[i] == a[i + 1] - n)
		{
			cout << a[i];
			break;
		}
	}
}
