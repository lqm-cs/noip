#include<iostream>
#include<algorithm>
using namespace std;

int N, a[100010], ra[100010];

bool cmp(int x, int y)
{
    return x > y;
}
int efl(int x)
{
    int l = 1, r = N, mid;
    while (l <= r)
    {
        mid = l + r >> 1;
        if (a[mid] <= x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return l;
}
int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
        ra[i] = a[i];
    }
    //øÏ≈≈
    sort(a + 1, a + N + 1, cmp);

    for (int i = 1; i <= N; i++)
    {
        cout << efl(ra[i]) << endl;
    }

    return 0;
}