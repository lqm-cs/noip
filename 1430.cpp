#include<iostream>
using namespace std;
//矩阵
int x[10] = { 0,0,1,-1 };
int y[10] = { 1,-1,0,0 };
int n, ha, la, hb, lb;
int a[105][105];

void dfs(int cur,int bottle,int temp)
{
	if(bottle==hb and temp==lb)
	{
		cout << "YES";
		exit(0);
	}
	for (int i = 0; i < 4; i++)
	{
		int next = bottle + x[i], ll = temp + y[i];
		if (next > 0 and next <= n and ll > 0 and ll <= n and a[next][ll] == 0)
		{
			a[next][ll] = 1;
			dfs(cur + 1, next, ll);
			a[next][ll] = 0;
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)	//��ȡ����
		for (int j = 1; j <= n; j++)
			cin >> a[i][i];
	cin >> ha >> la >> hb >> lb;
	if (a[ha][la] != 0 or a[hb][lb] != 0)
	{
		cout << "NO";
		return 0;
	}
	dfs(1, ha, la);
	cout << "NO";
	return 0;
}