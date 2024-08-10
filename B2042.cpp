#include<iostream>
using namespace std;

int main()                     
{
	int i;
	cin >> i;
	if (i % 3 == 0 && i % 5 == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}