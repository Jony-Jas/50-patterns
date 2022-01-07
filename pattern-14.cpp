#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= n - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=i; k++)
        {
            cout<<"*";
        }
        cout << endl;
    }
}