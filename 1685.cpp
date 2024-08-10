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
	for (int j = 1; j <= n; j++)	//ÿ����ȥ��
	{
		if (!vis[j])
		{
			vis[j] = true;
			b[cur] = j;
			dfs(cur + 1);		//�ݹ����
			vis[j] = false;		//���ݣ����Ϊû��ʹ�ù�
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