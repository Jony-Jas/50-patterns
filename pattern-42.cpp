#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int val = i;
        for (int j = 1; j <= n; j++)
        {
            cout << abs(val);
            val -= 1;
            if (val == 0)
            {
                val -= 2;
            }
        }
        cout << endl;
    }
}