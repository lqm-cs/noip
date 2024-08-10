#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	bool b;
	cin>>n;
	if(n%3==0)
	{
		cout<<"3 ";
		b=true;
	}
	if(n%5==0)
	{
		cout<<"5 ";
		b=true;
	}
	if(n%7==0)
	{
		cout<<"7 ";
		b=true;
	}
	if(b==false)
		cout<<n;
	return 0;
}
