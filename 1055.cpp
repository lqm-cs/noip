/*在1－n中，找出能同时满足用3除余2，用5除余3，用7除余2的所有整数的个数,如果没有请输出0*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % 3 == 2 and n % 5 == 3 and n % 7 == 2)
		{
			ans++;
		}
		else
		{
			cout << 0;
		}
	}
	cout << ans;
	return 0;
}
