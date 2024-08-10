#include<iostream>
using namespace std;

int n, s;
int dfs(int cur);

int main()
{
	cin >> n;
	dfs(n);
	cout << s + 1;
	return 0;
}

int dfs(int cur)	
{
	int temp;
	if (cur == 1)
		return 1;
	temp = dfs(cur - 1) + cur;
	s = s + temp;
	return temp;
}