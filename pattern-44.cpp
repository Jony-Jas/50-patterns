#include <iostream>
using namespace std;

int main()

{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                cout << i + 1;
            }
            else
            {
                cout << 0;
            }
        }
        for (int j = 0; j < i; j++)
        {
            if (j == i - 1)
            {
                cout << i + 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}