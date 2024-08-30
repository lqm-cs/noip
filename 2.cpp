#include <bits/stdc++.h>
using namespace std;

int main()
{
	int number = 0, change = 0;
	bool count = 0;
	cin >> number;
	int box[1000];
	for (int i = 0; i <= number; i++)
		cin >> box[i];
	cout << "原来的数组："
	for (int i = 0; i <= number; i++)
		cout /*<< "原来的数组："*/ << box[i] << ' ';
	cout << endl;
	for (int j = 0; j < number; j++)
	{
		for (int k = 0; k < number - j; k++)
		{
			int tem;
			if (box[k] > box[k + 1])
			{
				count = 1;
				/*tem = box[k];
				box[k] = box[k + 1];
				box[k + 1] = tem;*/
				box[k] = box[k + 1] + box[k];
				box[k + 1] = box[k] - box[k + 1];
				box[k] = box[k] - box[k + 1];
				change++;
			}
		}
	}
	if (count == false)
		cout << "当前数组已经排序好了";
	else
	{
		cout << "排序成功！" << endl;
		for (int m = 0; m <= number; m++)
			cout << box[m] << ' ' << endl;
		cout << "冒泡排序交换次数：" << change;
	}
	return 0;
}