#include <bits/stdc++.h>
using namespace std;

int ansb, ansg;
double ans1, ans2;
int boy[105];
int girl[105];

int main()
{
	for (int i = 0; i <= 105; i++)
	{
		cin >> boy[i];
		ansb = (boy[i] + boy[i + 1]) / i;
		if (boy[i] == 0)
			break;
	}
	for (int i = 0; i <= 105; i++)
	{
		cin >> girl[i];
		ansg = (girl[i] + girl[i + 1]) / i;
		if (girl[i] == 0)
			break;
	}
	cout << ansb + ansg;
	// cout<<ans1<<ans2;
	return 0;
}
