#include<iostream>
using namespace std;
int n,k,ans;
int a[30],b[30];
bool ispri(int x)
{
	for(int i=2;i*i<=x;i++) 
		if(x%i==0) return false;
	return true;
}
void dfs(int cur,int s)
{
	if(cur>k)
	{
		if(ispri(s)) ans++;
		return; 
	}
	for(int i=b[cur-1]+1;i<=n;i++)
	{
		b[cur]=i;
		dfs(cur+1,s+a[i]);
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	dfs(1,0);
	cout<<ans;
	return 0;
}
