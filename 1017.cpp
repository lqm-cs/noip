#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i = 100;
	while ((i % 3 == 2 and i % 5 == 3 and i % 7 == 5) != true) // ����ʣ��������ʣ��������ʣ��
		i++;
	cout << i;
	return 0;
}
