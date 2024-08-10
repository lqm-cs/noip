#include<iostream>
#include<algorithm>
using namespace std;

bool vis[15];
int b[30];
int a[30];
int n;

void dfs(int cur)
{
	if (cur > n)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << a[b[i]] << " ";
		}
		cout << endl;
		return;
	}
	for (int j = 1; j <= n; j++)	//每个数去试
	{
		if (!vis[j])
		{
			vis[j] = true;
			b[cur] = j;
			dfs(cur + 1);		//递归调用
			vis[j] = false;		//回溯，标记为没有使用过
		}
	}
}
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1,a+1+n);
	dfs(1);
	return 0;
}