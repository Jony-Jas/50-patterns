#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n-1; i >=0 ; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j + i > n)
            {
                cout << n;
            }
            else
            {
                cout << j + i;
            }
        }
        cout << endl;
    }
}