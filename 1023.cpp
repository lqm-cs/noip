#include <bits/stdc++.h>
using namespace std;
bool ispre(int x) // �ж�����
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if (n == 1 or n == 0)
	{
		cout << "F";
		return 0;
	}
	if (ispre(n))
		cout << "T";
	else
		cout << "F";
	return 0;
}
// WSH ON TOP!!!
