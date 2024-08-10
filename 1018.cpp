#include <bits/stdc++.h>
using namespace std;
int main()
{
	int j1, j2, j3;
	cin >> j1 >> j2 >> j3;
	if ((j1 + j2) > j3 and (j1 + j3) > j2 and (j2 + j3) > j1)
		goto label;
	else
	{
		cout << "no";
		return 0;
	}
// ֱ��
// label;
label:
	if ((j1 * j1) + (j2 * j2) == (j3 * j3))
		cout << "zhijiao";
	// �۽�
	else if ((j1 * j1) + (j2 * j2) < (j3 * j3))
		cout << "dunjiao";
	// ���
	else if ((j1 * j1) + (j2 * j2) > (j3 * j3))
		cout << "ruijiao";
	return 0;
}
// WSH ON TOP!!!
