#include<iostream>
using namespace std;

int main()
{
    int a,b,c; 
    cin>>a>>b>>c;
    int d=0;
    if(a<60)
	{
		d++;
	}
    if(b<60)
	{
		d++;
	} 
    if(c<60) 
    {
    	d++;
	}
    if(d==1) 
    {
    	cout<<'1';
	}
    else 
    {
    	cout<<'0';
	}
    return 0;
}
