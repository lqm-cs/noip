#include<bits/stdc++.h>
using namespace std; //指定名字空间
#include <iostream>
#include <vector>
#include <algorithm>
int main() 
{ //主函数
	/*int a[100]; //定义数组，大小100
	int N; //元素的实际个数
	int i = 0, j = 0; //循环变量，并进行初始化
	cin >> N; //输入元素个数
			  //-------输入数据-----------
	for (i = 0; i<N; i++) //输入N个元素
		cin >> a[i]; //循环体只有一行
					 //-------排序---------------
	for (i = 0; i<N - 1; i++) { //控制n-1趟冒泡
		for (j = 0; j<N - 1 - i; j++)
		{
			if (a[j]>a[j + 1]) { //比较相邻的两个元素
				int tmp; //临时变量
				tmp = a[j]; //交换
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	//--------输出----------
	for (i = 0; i<N; i++) 
	{ //使用循环，输出N个元素
		cout << a[i] << " "; //输出a[i], 后加空格，不换行
	}
	cout << endl;*/ //所有元素输出完之后才换行
	int N;
	vector<int> a[1000];
	cin >> N;
	for (int i = 0; i<=N;i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 0; i<= N; i++)
		cout << a[i] << endl;
	return 0; //函数返回
}
