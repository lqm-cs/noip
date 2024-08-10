#include <iostream>
using namespace std;

int main()
{
	int k;
	int m = 0;
	int t = 0;
	cin >> k;
	for (int i = 1;; i++)
	{
		for (int j = 1; j <= i && t < k; j++)
		{
			t++;
			m += i;
		}
		if (t >= k)
		{
			break;
		}
	}
	cout << m;
	return 0;
}
