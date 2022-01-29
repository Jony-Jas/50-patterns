#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c = 64;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            c = c+1;
            cout << char(c);
        }
        cout << endl;
    }
}