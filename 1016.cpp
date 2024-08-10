#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, a, b, ans = 0;
	cin >> x >> a >> b;
	for (int dog = 1; dog <= x / a; dog++)
		if (x - dog * a > 0 && (x - dog * a) % b == 0)
			ans++;
	cout << ans;
	return 0;
}
// WSH ON TOP!!!
