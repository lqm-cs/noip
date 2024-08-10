#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum;
    cin >> num;
    int hundred = num % 10 * 100;
    // cout<<hundred;
    int ten = num / 10 % 10 * 10;
    // cout<<ten;
    int one = num / 100;
    // cout<<one;
    sum = num + (hundred + ten + one);
    cout << sum;
    return 0;
}
// WSH ON TOP!!!
