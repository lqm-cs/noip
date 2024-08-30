#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    cin >> input;
    if (input > 0)

        for (int i = 0; i <= input; ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                cout << i << '*' << j << '=' << i * j; /*<< endl;*/
            }
            cout << endl;
        }
    else
        cout << "换一个数字试试吧";
    return 0;
}