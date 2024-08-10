#include<bits/stdc++.h>
using namespace std;

/*第 1 行输出 100 分人数；
  第 2 行输出不小于 90 且小于 100 的人数；
  第 3 行输出不小于 80 且小于 90 的人数；
  第 4 行输出不小于 70 且小于 80 的人数； 
  第 5 行输出不小于 60 且小于 70 的人数； 
  第 6 行输出小于 60 的人数。*/

int main()
{
	int a[50],n,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==100)
			a1++;
		else if(a[i]<100 and a[i]>90)
			a2++;
		else if(a[i]>80 and a[i]<90)
			a3++;
		else if(a[i]>70 and a[i]<80)
			a4++;
		else if(a[i]>60 and a[i]<70)
			a5++;
		else if(a[i]<60)
			a6++;
	}
	cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6;
	return 0;
}
