#include <bits/stdc++.h>
using namespace std;
/*
某车站行李托运收费标准是：
10公斤或10公斤以下，收费2.5元，
超过10公斤的行李，
按每超过1公斤增加1.5元进行收费。
 试编一程序，输入行李的重量，算出托运费。
 */
int main()
{
    int kg;
    double yuan = 0.0;
    cin >> kg;
    if (kg <= 10)
    {
        yuan = 2.5;
    }
    else if (kg > 10)
    {
        yuan = 2.5;
        kg = kg - 10;
        yuan = yuan + (kg * 1.5);
    }
    cout << fixed << setprecision(2) << yuan;
    return 0;
}