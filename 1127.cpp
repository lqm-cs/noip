#include<iostream>
using namespace std;

int main()
{
	int n,a,b;
	cin >> n >> a >> b;
	for (int i = 2; i < n / a; i += 2)
	{
		int x, y;
		x = i * a;
		y = (n - x);
		if (y % b == 0 && y / b > 0 && y / b % 2 == 0)
		{
			cout << i << " " << y / b;
		}
	}
	return 0;
} 
