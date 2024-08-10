#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int n, m;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (i % 17 == 0)
		{
			sum = sum + i;
		}
	}
	cout << sum;
	return 0;
}