#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	float ans;
	cin >> a >> b >> c;
	if ((a * a) + (b * b) == (c * c))
		ans = a * b / 2;
	else
	{
		cout << "No";
		return 0;
	}
	printf("%.1f", ans);
	return 0;
}
// WSH ON TOP!!!
