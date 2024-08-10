#include<iostream>
using namespace std;

int main()
{
	char ch;
	int a;
	float b;
	double c;
	cin >> ch >> a >> b >> c;
	cout << ch << " " << a << " ";
	printf_s("%.6f %.6lf", b, c);
	return 0;
}