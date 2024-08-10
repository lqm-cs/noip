#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	float sum = 0;
	cin >> n;
	// scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		// printf("1/%d\n", i);
		sum += 1 / (float)i;
	}
	printf("%.3f", sum);
	// cout<<fixed<<setprecision(3)<<sum<<endl;
	return 0;
}
// WSH ON TOP!!!
