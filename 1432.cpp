#include <bits/stdc++.h>
using namespace std;

int R, C;
char d[50][50];
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
        if (d[tx][ty] == '.' and a[tx][ty] > cur + 1)
        {
            dfs(cur + 1, tx, ty);
        }
    }
}

int main()
{
    cin >> R >> C;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            a[i][j] = INT_MAX;
            cin >> d[i][j];
        }
    }
    dfs(1, 1, 1);
    cout << a[R][C];
    return 0;
}