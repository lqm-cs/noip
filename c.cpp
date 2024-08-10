#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100000],n,x,y,ans;
	double ans2;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<=x and a[i]>=y)
		{
			ans++;
		}
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=x and a[i]<=y)
		{
			ans++;
		}
	}
	ans2=ans/10.0;
	cout<<fixed<<setprecision(2)<<ans2;
	return 0;
}
