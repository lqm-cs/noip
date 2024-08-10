#include<iostream>
using namespace std;

double ave(double x, double y, double z)
{
	return (x + y + z) / 3;
}

int main()
{
	double x, y, z, f;
	cin >> x >> y >> z;
	f = ave(x, y, z);
	cout << x + y + z << endl;
	printf_s("%.1f", f);
	return 0;
}