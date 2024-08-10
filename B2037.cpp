#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	char ch[] = "odd";
	char ch1[] = "even";
	if (i % 2 == 0)
	{
		cout << ch1;
	}
	else
	{
		cout << ch;
	}
	return 0;
}