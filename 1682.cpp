#include<iostream>
using namespace std;

int md;
int shit,giao;
int fuck[30];

void dfs(int van,int jiji)
{
    if(jiji==md)
    {
        giao++;
        return;
    }
    if(van>shit)
    {
        return;
    }
    dfs(van+1,jiji);
    dfs(van+1,jiji+fuck[van]);
    return;
}

int main()
{
    cin>>shit;
    for(int i=1;i<=shit;i++)
    {
        cin>>fuck[i];
    }
    cin>>md;
    dfs(1,0);
    if(giao==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}