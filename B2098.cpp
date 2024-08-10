#include<iostream>
using namespace std;  

bool z[105];
int main()
{
	int a,n;
	cin >> n;
	for(int i=1;i<=n;i++) 
	{
		cin>>a;
		if(!z[a])
		{
		    cout<<a<<' ',z[a]=1;  
		}	
	}
	return 0;
}
