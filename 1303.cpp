/*买10个以上或者10个，2元/个，10个以下，2.2元/个*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double s;
	if (n >= 10)
	{
		s = n * 2.0;
	}
	else
		s = n * 2.2;
	cout << fixed << setprecision(1) << s;
	return 0;
}
