#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,g,s,b,q;
	cin>>n;
	g=n/1000;
	s=n/100%10;
	b=n/10%10;
	q=n%10;
	cout<<g+s+b+q;
	return 0;
}
