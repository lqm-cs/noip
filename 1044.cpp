#include <bits/stdc++.h>
using namespace std;
/*
小于10公斤的用A型，
大于等于10公斤小于20公斤的用B型，
大于等于20公斤小于40公斤的用C型，
大于等于40公斤的小于50公斤的用D型，
大于等于50公斤小于80公斤的用E型
*/
int main()
{
    int kg;
    char x;
    cin >> kg;
    if (kg < 10)
    {
        x = 'A';
    }
    else if (kg >= 10 && kg < 20)
    {
        x = 'B';
    }
    else if (kg >= 20 && kg < 40)
    {
        x = 'C';
    }
    else if (kg >= 40 && kg < 50)
    {
        x = 'D';
    }
    else if (kg >= 50 && kg < 80)
    {
        x = 'E';
    }
    cout << x;
    return 0;
}