#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n, b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> b;
		a[i] = 0;
		while (b > 0)
		{
			a[i] += b % 10;
			b /= 10;
		}
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
// WSH ON TOP QQ:909603414