#include <bits/stdc++.h>
using namespace std;
/*任何一个大于1的自然数n(n<20)，总可以拆分成若干个小于n的自然数之和。当n=7,共有14种拆分方法：
  7=1+1+1+1+1+1+1
  7=1+1+1+1+1+2
  7=1+1+1+1+3
  7=1+1+1+2+2
  7=1+1+1+4
  7=1+1+2+3
  7=1+1+5
  7=1+2+2+2
  7=1+2+4
  7=1+3+3
  7=1+6
  7=2+2+3
  7=2+5
  7=3+4
*/
int a[100], sum1 = 0, n;

void func(int m, int sum)
{
	if (sum == n)
	{
		sum1++;
		cout << n << "=";
		for (int i = 1; i < m; i++)
		{
			cout << a[i];
			if (i != m - 1)
			{
				cout << "+";
			}
		}
		cout << endl;
	}
	else
	{
		for (int i = a[m - 1]; i < n; i++)
		{
			if (sum + i > n)
				break;
			else
			{
				a[m] = i;
				func(m + 1, sum + i);
				a[m] = 0;
			}
		}
	}
}
int main()
{
	cin >> n;
	a[0] = 1;
	func(1, 0);
	return 0;
}
