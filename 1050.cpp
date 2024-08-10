#include <bits/stdc++.h>
using namespace std;
int m, ans, sign, good_km;
int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> m;
		if (m >= 90)
		{
			good_km++;
			ans++;
		}
		else if (m < 60)
		{
			sign = 1;
			break;
		}
	}
	if (good_km == 4)
		ans = 5;
	if (sign == 0)
		cout << ans;
	else
		cout << "Poor LanYangYang";
	return 0;
}
// WSH ON TOP!!!
