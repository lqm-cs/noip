#include<iostream>
using namespace std;

int main()
{
	double a,b,w;
	cin>>a;
	b=27+a/3.0+23;
	w=a/1.2;
	if(b>w)
	{
		cout<<"Walk";
	}
	else if(w>b)
	{
		cout<<"Bike";
	}
	else if(w==b)
	{
		cout<<"All";
	}
	return 0;
}
