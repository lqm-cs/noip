#include <iostream>
using namespace std;

int main()
{
	int i, j;
	int max = 0, t = 0;
	int now = 0;
	cin >> i >> j;
	now++;
	for (int a = 0; a <= 7; a++)
	{
		if (i + j > max)
		{
			max = i + j, t = now;
		}
		cin >> i >> j;
		now++;
	}
	cout << t;
	return 0;
}