#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	if(n>m)
	{
		int ym;
		ym=m;
		m=n;
		cout<<n*m-(ym*n);
	}
	else if(n==m)
		cout<<n*m;
	else if(m>n)
	{
		int yn;
		yn=n;
		n=m;
		cout<<n*m-(yn*m);
	}
	return 0;
}
