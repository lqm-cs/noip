/*输出1—999中有因数3，且至少有一位数字是5的数*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int g, s, b;
	for (int i = 1; i <= 999; i++)
	{
		b = i / 100;
		s = i / 10 % 10;
		g = i % 10;
		if (i % 3 == 0)
		{
			if (b == 5 or s == 5 or g == 5)
				cout << i << endl;
		}
	}
	return 0;
}
