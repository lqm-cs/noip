#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin >> n;
    while (n > 1)
    {
        ans++;
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    cout << ans;
    return 0;
}