#include<iostream>
using namespace std;

int main() 
{
    int d;
    int a, b, c;
    cin>>d;
    a=d/100;
    b=d/10%10;
    c=d%10;
    cout<<c<<b<<a;
    return 0;
}
