#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1005],b[1005],c[1005];
    for(int i=0; i <= 1005 ; i++)
        a[i]=i;
    for(int j = 1005; j >= 0 ; j-=1)
        b[j]=j;
    cout << b[200];
    for (int f = 0; f <= 1005 ; f++)
    {
        c[f]=b[f]*a[f];
        cout << a[f] << '*' << b[f] << '=' << c[f] << '\n';
    }
    return 0;
}