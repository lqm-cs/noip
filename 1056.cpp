#include <bits/stdc++.h>
using namespace std;

int main()
{
	int g, s, b, ans = 0;
	for (int i = 1; i <= 999; i++)
	{
		b = i / 100;
		s = i / 10 % 10;
		g = i % 10;
		if (b == 3 or s == 3 or g == 3)
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
