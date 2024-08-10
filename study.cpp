#include <bits/stdc++.h>
using namespace std;

template <class T>
void lqm_swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i1, i2;
    cin >> i1 >> i2;
    cout << i1 << ' ' << i2 << endl;
    lqm_swap(i1, i2);
    cout << i1 << ' ' << i2;
    return 0;
}
