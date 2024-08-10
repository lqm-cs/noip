#include <iostream>
using namespace std;

int a[2000];
int b[2000];
int c[2000];
int sum[2000];
const int q = 1000;

void pplus(int *a, int *c)
{
	int jw = 0;
	for (int i = 1; i <= q; i++)
	{
		c[i] += a[i] + jw;
		jw = c[i] / 10;
		c[i] %= 10;
	}
}

void cheng(int *a, int c)
{
	int j = 0;
	for (int i = 1; i <= q; i++)
	{
		a[i] = a[i] * c + j;
		j = a[i] / 10;
		a[i] %= 10;
	}
}

int main()
{
	int n;
	cin >> n;
	a[1] = 1;
	for (int i = 1; i <= n; i++)
	{
		cheng(a, i);
		pplus(a, c);
	}
	bool f = 0;
	for (int i = q; i >= 1; i--)
	{
		if (c[i] != 0)
		{
			f = 1;
		}
		if (f)
		{
			cout << c[i];
		}
	}
	return 0;
}