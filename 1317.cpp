// 多边形内角和定理，正多边形内角和等于：（n － 2）×180°(n大于等于3且n为整数）
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	double ans;
	cin >> n;
	ans = (n - 2) * 180 * 1.0 / n;
	printf("%.1f", ans);
	return 0;
}
