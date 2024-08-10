#include<iostream>
using namespace std;

int main()
{
	int sum = 0;   
	int n, m;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			sum = sum + i;
		}
		cout << i << " "<< sum << endl;
	}
	return 0;
}