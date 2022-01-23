#include <iostream>
using namespace std;

int main()

{
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            count++;
            cout << count;
        }
        for (int j = 0; j < i; j++)
        {
            count++;
            cout << count;
        }
        cout << endl;
    }
}