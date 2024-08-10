#include <bits/stdc++.h>
using namespace std;

int main()
{
	int old, ans;
	cin >> old;
	if (old > 10)
		ans = 25 * 3 * 5;
	else if (old >= 7 and old <= 10)
		ans = 15 * 3 * 5;
	else if (old >= 3 and old <= 6)
		ans = 5 * 3 * 5;

	if (ans % 120 == 0)
		cout << ans / 120 << endl;
	else
		cout << ans / 120 + 1 << endl;
	return 0;
}
