/*30个及以上1元/个， 20~29个1.2元/个，10~19个1.5元/个，10个以下1.8元/个*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double s;
	if (n >= 30)
		s = n * 1.0;
	else if (n >= 20 and n <= 29)
		s = n * 1.2;
	else if (n >= 10 and n <= 19)
		s = n * 1.5;
	else if (n < 10)
		s = n * 1.8;
	cout << fixed << setprecision(1) << s;
	return 0;
}
