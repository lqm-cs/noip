#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int c;
	cin >> c;
	double f;
	f = 9.0 / 5.0 * c + 32.0;
	cout << fixed << setprecision(2) << f;
	return 0;
}