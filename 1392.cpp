/*个位：12345 % 10 = 5

十位：12345 % 100 / 10 = 4

百位：12345 % 1000 / 100 = 3

千位：12345 % 10000 / 1000 = 2

  万位：12345 / 10000 = 1*/

/*找出所有3位的既是回文数，又是偶数的数，
  比如：202就是满足条件的数，而121虽然是回文数但不是偶数。*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	//int ans=0;
	for(int i=100;i<=999;i++)
	{
		int g=0,s=0,b=0;
		
		g=i%10;
		s=i%100/10;
		b=i%1000/100;
		
		if(g==b and i%2==0)
		{
			cout<<i<<endl;
		}
	}
	//cout<<ans;
	return 0;
}

