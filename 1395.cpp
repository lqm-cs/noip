
/*小丽同学想在1~n中找出这样的数，
  这个数的各个位的和不能被2整除也不能被5整除，
  比如3、12、25、30、100。这些数都满足各个位的和不能被2和5整除。
  请你编程找出1~n中这些数有多少个？*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int g=0,s=0,b=0,q=0,tmp;
		g=i%10;
		s=i%100/10;
		b=i%1000/100;
		q=i%10000/1000;
		tmp=g+s+b+q;
		if(tmp%2!=0 and tmp%5!=0)
			ans++;
	}
	cout<<ans;
	return 0;
}
