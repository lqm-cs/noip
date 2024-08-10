#include <bits/stdc++.h>
using namespace std;
/*
如果86分以上(包括86分）则输出“VERY GOOD” ，
如果在60到85之间的则输出“GOOD”(包括60和85)，小于60的则输出“BAD”。
*/
int main()
{
    int n;
    cin >> n;
    if (n >= 86)
    {
        cout << "VERY GOOD";
    }
    else if (n >= 60 and n <= 85)
    {
        cout << "GOOD";
    }
    else if (n < 60)
    {
        cout << "BAD";
    }
    return 0;
}