#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if ((n / 100000) < 1)
		cout << "wan";
	else if ((n / 1000000) < 1)
		cout << "shi wan";
	else if ((n / 10000000) < 1)
		cout << "bai wan";
	else if ((n / 100000000) < 1)
		cout << "qian wan";
	else if ((n / 1000000000) < 1)
		cout << "yi";
	else if ((n / 10000000000) < 1)
		cout << "shi yi";
	return 0;
}
