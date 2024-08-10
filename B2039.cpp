#include<iostream>
using namespace std;

int main()
{
	int i, num;
	cin >> i >> num;
	if (i < num)
	{
		cout << "<";
	}
	else if (i > num)
	{
		cout << ">";
	}
	else
	{
		cout << "=";
	}
	return 0;
}