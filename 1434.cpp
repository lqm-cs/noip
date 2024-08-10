#include <iostream>
using namespace std;

char a[200][200]; //池塘
int ans, m, n;

void dfs(int xx, int yy)
{
	a[xx][yy] = '.';		  //不是水的区域
	if (a[xx][yy + 1] == 'W') //判断竖列下个区域是不是水
		dfs(xx, yy + 1);
	if (a[xx][yy - 1] == 'W') //判断竖列上个区域是不是水
		dfs(xx, yy - 1);
	if (a[xx + 1][yy] == 'W') //判断横列下个区域是不是水
		dfs(xx + 1, yy);
	if (a[xx - 1][yy] == 'W') //判断横列上个区域是不是水
		dfs(xx - 1, yy);
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j]; //接收数据
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (a[i][j] == 'W') //判断水的区域
			{
				ans++; //循环标记
				dfs(i, j);
			}
	cout << ans; //输入结果
	return 0;
}