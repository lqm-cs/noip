#include<bits/stdc++.h>
using namespace std;

int n, ans, a[15][15];
int x[] = {-1, -1, -1, 0, 1, 1, 1, 0}; //ÐÐ
int y[] = {-1, 0, 1, 1, 1, 0, -1, -1};	//ÁÐ

void dfs(int xx, int yy) 
{
	if (xx == 1 and yy == n)
	{
		ans++;
		return;
	}
	int x1, y1;
	for (int i = 0; i < 8; i++) 
	{
		x1 = xx + x[i];
		
		y1 = yy + y[i];

		if (x1 > 0 && x1 <= n && y1 > 0 && y1 <= n && a[x1][y1] == 0) 
		{
			a[x1][y1] = 1;
			dfs(x1, y1);
			a[x1][y1] = 0;
		}
	}
}

int main() 
{
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			cin >> a[i][j];
		}
	}
	if (a[1][1] == 0) 
	{
		a[1][1] = 1;
		dfs(1, 1);
	}
	cout << ans;
	return 0;
}
