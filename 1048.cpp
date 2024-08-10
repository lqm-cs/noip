// 1��ʾʯͷ��2��ʾ������3��ʾ��
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, k;
	cin >> t >> k;
	if (t == 1 and k == 2)
		cout << "win";
	else if (t == 2 and k == 3)
		cout << "win";
	else if (t == 3 and k == 1)
		cout << "win";
	else if (t == k)
		cout << "tie";
	else
		cout << "lose";
	return 0;
}
