#include<bits/stdc++.h>
using namespace std;
int a[114514],n,diamond;
int a1,a2,a3,a4,a5;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>=0 and a[i]<=10)
			a1++;
		else if(a[i]<=11 and a[i]>=30)
			a2++;
		else if(a[i]<=31 and a[i]>=60)
			a3++;
		else if(a[i]>=61 and a[i]<=100)
			a4++;
		else if(a[i]>100)
			a5++;
	}
	diamond=(a1*4)+(a2*3)+(a3*2)+(a4*1)+(a5*0);
	cout<<diamond;
	return 0;
}
