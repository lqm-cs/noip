#include <iostream>
using namespace std;

int main()
{
	int j;
	int k;
	cin >> k;
	for (int i = 2; i <= k; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				break;
			else 
				cout << j;
		}
		
	}
	return 0;
}