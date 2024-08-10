#include <iostream>
using namespace std;

int v[30];
int a[30];
int s = 0;

bool ispre(int x) // �ж�����
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

void dfs(int cur)
{
	if (cur == 4)
	{
		if (!ispre(a[0] + a[3]))
		{
			return;
		}
		s++;
		for (int i = 0; i < 4; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= 20; i++)
	{
		if (v[i] == false && (cur == 0 || ispre(a[cur - 1] + i)))
		{
			v[i] = true; // ʹ�ñ��
			a[cur] = i;
			dfs(cur + 1);
			v[i] = false; // �����ǣ�����
		}
	}
}

int main()
{
	int x;
	cin >> x;
	cout << ispre(x);
	dfs(0);
	cout << s;
	return 0;
}
