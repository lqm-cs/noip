#include <bits/stdc++.h>
using namespace std;

string s;
int ans = 0;

int main()
{
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}
