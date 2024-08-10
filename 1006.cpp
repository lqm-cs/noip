#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= 3; i++)
        for (int i = 1; i <= a; i++)
        {
            for (int j = 0; j <= a - 1 - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i * 2 - 1; j++)
            {
                cout << "*";
                cout << endl;
            }
            
        }
    return 0;
}
// WSH ON TOP!!
