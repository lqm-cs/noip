#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q = 0;
    for (int i = 100; i >= 1; i = i - 3)
    {
        q = q + i;
    }
    cout << q << endl;
    return 0;
}
