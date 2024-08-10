#include<bits/stdc++.h>
using namespace std;
int n,m;
double x,ans;
/*n是刀的伤害，m是怪的血量，m是附魔等级*/
int main()
{
	cin>>n>>m>>x;
	if(x==0)
		x=0.0;
	else if(x==1)	
		x=1.0;
	else if(x==2)
		x=1.5;
	else if(x==3)
		x=2.0;
	else if(x==4)
		x=2.5;
	else if(x==5)
		x=3.0;
	ans=m/(1.0*x+n);
	cout<<ceil(ans);
	return 0;
}
