#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pi = 3.1415926;
    double n, area, per;
    cin >> n;
    area = n * n * pi;
    per = n * 2.0 * pi;
    cout << fixed << setprecision(2) << area << endl;
    cout << fixed << setprecision(2) << per << endl;
    return 0;
}