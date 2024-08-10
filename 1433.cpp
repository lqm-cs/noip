#include <bits/stdc++.h>
using namespace std;

char d[50][50];
int n, m, s1, s2, t1, t2;
int a[50][50];
int xi[5] = {0, 0, 1, -1};
int yi[5] = {1, -1, 0, 0};

void dfs(int cur, int x, int y)
{
    a[x][y] = cur;
    for (int i = 0; i < 4; i++)
    {
        int tx = x + xi[i];
        int ty = y + yi[i];
        if (d[tx][ty] == '.' && a[tx][ty] > cur + 1)
        {
            dfs(cur + 1, tx, ty);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a[i][j] = INT_MAX;
            cin >> d[i][j];
            if (d[i][j] == 'S')
            {
                s1 = i;
                s2 = j;
            }
            if (d[i][j] == 'T')
            {
                t1 = i;
                t2 = j;
                d[i][j] = '.';
            }
        }
    }
    dfs(0, s1, s2);
    cout << a[t1][t2];
    return 0;
}