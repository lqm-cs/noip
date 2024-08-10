#include<iostream>
using namespace std;

int main()
{
	int day, hour, second;
	cin >> day;
	hour = day * 24;
	second = hour * 60;
	cout << hour << endl << second;
	return 0;
}