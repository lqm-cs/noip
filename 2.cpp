#include <bits/stdc++.h>
using namespace std;
int n, m, k, t;
/*深圳中学高三多校联考刚刚结束，每位同学每位同学也知道了自己的分数。此时，校长拿到了清华大学的理科预估分数线k。每位同学共有m门成绩，包括语文、数学、外语、综合、IB模块等。
  校长请你帮忙，统计一下，总分可以达到清华大学分数线的同学人数。（总分大于或等于分数线即可）

  【输入】
  第一行三个整数n，m和k，分别表示参加考试的人数，考试门数和预估分数线。
  1<=n<=1000, 3<=m<=7，600<=k<=810，。
  接下来n行，每行m个整数，表示每位同学的m门学科的成绩。成绩0<=x<=300。

  【输出】
  一个整数，表示达到分数线的人数。*/
struct stu
{
	int a[18];
	int sum;
} s[1145];

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> s[i].a[j];
			s[i].sum += s[i].a[j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i].sum >= k)
			t++;
	}
	cout << t;
	return 0;
}
