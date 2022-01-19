#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
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