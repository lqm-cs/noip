#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, i;
    cin >> a;
    if (a <= 15)
    {
        printf("%.2lf\n", a / 1.5);
    }
    if (a > 15)
    {
        printf("%.2lf\n", (a - 15) / 2.5 + 10);
    }
    return 0;
}
