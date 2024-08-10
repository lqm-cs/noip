/*用选择法对数组中的n个元素按从小到大的顺序进行排序*/

#include <bits/stdc++.h>
using namespace std;
void bubble(int a[], int n)
{
	int i, j, t, p;
	for (j = 0; j < n - 1; j++)
	{
		p = j;
		for (i = j; i < n; i++)
			if (a[i] < a[p])
				p = i;
		t = a[p];
		a[p] = a[j];
		a[j] = t;
	}
}

int main()
{
	int n;
	int a[10];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	bubble(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	return 0;
}
