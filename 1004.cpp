#include <bits/stdc++.h>
using namespace std;

int func(int a)
{
    if (a <= 1)
        return 1;
    return (a * func(a - 1));
}

int main()
{
    int a, b;
    cin >> a;
    b = func(a);
    cout << b;
    return 0;
}