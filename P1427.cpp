#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int a[105];
	cin >> a[i];
	while (a[i] > 0)
	{
		i++;
		cin >> a[i];
	}
	for (int j = i - 1; j >= 0; j--)
	{
		cout << a[j] << " ";
	}
	return 0;
}
