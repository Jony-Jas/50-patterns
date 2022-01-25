#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c;
    for (int i = 0; i < n; i++)
    {
        c = 'A';
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }
}