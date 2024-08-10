#include<iostream>
using namespace std;

bool vis[15];//标记是否使用
int a[15];//结果 
int n,s;

bool ispri(int x)
{
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}
void dfs(int cur)
{
	if(cur>n)
	{
		if(ispri(a[1]+a[n]))
		{
			s++;
			cout<<s<<":";
			for(int i=1;i<=n;i++) cout<<a[i]<<" ";
			cout<<endl;
			return;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!vis[i] && ((cur==1) or ispri(i+a[cur-1])))
		{
			a[cur]=i;
			vis[i]=true;
			dfs(cur+1);
			vis[i]=false;//回溯 
		}
	}
	return;
}

int main()
{
	cin>>n;
	dfs(1);
	cout<<"total:"<<s;
	return 0;
}
