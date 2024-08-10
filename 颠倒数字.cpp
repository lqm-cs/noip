#include <bits/stdc++.h>
using namespace std;
int a, b, n;
int main()
{
    cin >> n;
    a = n % 10 * 10;
    b = n / 10;
    cout << b + a;
    return 0;
}
