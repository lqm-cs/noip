#include<iostream>
using namespace std;

int n, m;
int ai[15] = { 0,1,0,-1 };
int aj[15] = { 1,0,-1,0 };
int ans[15][15];

void dfs(int cur, int bi, int bj)
{
	if (cur > m * n)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				printf("%3d", ans[i][j]);
			}
			cout << endl;
		}
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int ci, cj;
		ci = bi + ai[i];
		cj = bj + aj[i];
		if (ci > 0 && ci <= n && cj > 0 && cj <= m && ans[ci][cj] == 0)
		{
			ans[ci][cj] = cur;
			dfs(cur + 1, ci, cj);
		}

	}
}


int main()
{
	cin >> n >> m;
	ans[1][1] = 1;
	dfs(2, 1, 1);
	return 0;
}
