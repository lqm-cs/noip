#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b) < c or (a + c) < b or (c + b) < a)
	{
		cout << "No";
		return 0;
	}
	else if ((a + b) > c and (a + c) > b and (c + b) > a)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
// WSH ON TOP!!!
