#include <iostream>
using namespace std;

char a[200][200]; //����
int ans, m, n;

void dfs(int xx, int yy)
{
	a[xx][yy] = '.';		  //����ˮ������
	if (a[xx][yy + 1] == 'W') //�ж������¸������ǲ���ˮ
		dfs(xx, yy + 1);
	if (a[xx][yy - 1] == 'W') //�ж������ϸ������ǲ���ˮ
		dfs(xx, yy - 1);
	if (a[xx + 1][yy] == 'W') //�жϺ����¸������ǲ���ˮ
		dfs(xx + 1, yy);
	if (a[xx - 1][yy] == 'W') //�жϺ����ϸ������ǲ���ˮ
		dfs(xx - 1, yy);
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j]; //��������
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (a[i][j] == 'W') //�ж�ˮ������
			{
				ans++; //ѭ�����
				dfs(i, j);
			}
	cout << ans; //������
	return 0;
}