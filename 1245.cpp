#include<iostream>
using namespace std;

int a;
int f(int x, int s)
{
	if (x > a)
	{
		return 0;
	}
	int y = s * 10 + a;
	return y + f(x + 1, y);
}

int main()
{
	cin >> a;
	cout << f(1, 0);
	return 0;
}