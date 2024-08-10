#include <iostream>
using namespace std;
typedef int zs;
int main()
{
	zs n, t = 0;
	cin >> n;
	for (; n > 0;)
	{
		t = t + n % 10;
		n = n / 10;
	}
	cout << t;
	return 0;
}