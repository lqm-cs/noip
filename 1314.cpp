#include <bits/stdc++.h>
using namespace std;

int n, a[105], x, b[105];

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x >= 60)
			a[65]++;
		if (x >= 50 && x <= 59)
			a[66]++;
		if (x >= 40 && x <= 49)
			a[67]++;
		if (x >= 30 && x <= 39)
			a[68]++;
		if (x >= 20 && x <= 29)
			a[69]++;
		if (x < 20)
			a[70]++;
	}
	b[70] = 70, b[69] = 69, b[68] = 68, b[67] = 67, b[66] = 66, b[65] = 65;
	for (int i = 65; i <= 70; i++)
	{
		for (int k = i + 1; k <= 70; k++)
		{
			if (a[i] < a[k])
			{
				swap(a[i], a[k]);
				swap(b[i], b[k]);
			}
			if (a[i] == a[k])
			{
				if (b[i] > b[k])
				{
					swap(a[i], a[k]);
					swap(b[i], b[k]);
				}
			}
		}
	}
	for (int i = 65; i <= 70; i++)
		cout << char(b[i]) << ":" << a[i] << endl;
	return 0;
}
