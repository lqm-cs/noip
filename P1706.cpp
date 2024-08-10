#include <iostream>
#include <iomanip>
using namespace std;

int n, ans[2000];
bool v[2000];

void dfs(int cur)
{
    if (cur == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << setw(5) << ans[i];
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == false)
        {
            v[i] = true;
            ans[cur] = i;
            dfs(cur + 1);
            v[i] = false;
        }
    }
}
int main()
{
    cin >> n;
    dfs(1);
    return 0;
}
