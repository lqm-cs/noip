#include<iostream>
using namespace std;

int s = 0, x = 1;

int main()
{
	for (int i = 1; s < 5000; i++)
	{
		s = s + x;
		x = x + i;
	}
	cout << s;
	return 0;
}