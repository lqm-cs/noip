#include <bits/stdc++.h>
using namespace std; 

int main()
{
    string s;
    int j = 1, p = 0;
    getline(cin, s);
    int sss = s.size();
    int a[sss], k = 0;
    for (int i = 0; i <= sss - 1; i++)
    {
        if (s[i] == s[i + 1])
            j++;
        else
            a[k] = j, k++, j = 1;
    }
    for (int i = 0; i <= sss - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            if (a[p] > 1)
            {
                cout << a[p];
            }
            cout << s[i];
            p++;
        }
    }
    return 0;
}