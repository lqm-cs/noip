#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (true)
    {
        char *ch;
        cin >> ch;
        for (int i = 0; i <= n; i++)
        {
            if (i < 4)
            {
                break;
            }
            else
            {
                switch (n)
                {
                case 10:
                    cout << "one";
                    break;
                case 22:
                    cout << "two";
                    break;
                case 35:
                    cout << "three";
                    break;
                case 47:
                    cout << "four";
                    break;
                default:
                    cout << "hello world";
                    break;
                }
            }
            break;
        }
        if (true == strcmp(ch, "hhhhh"))
        {
            break;
        }
    }
    return 0;
}