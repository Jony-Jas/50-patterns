#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if (j == pos)
            {
                cout<<"!";
            }
            else
            {
                cout<<"#";
            }
        }
        pos = pos - 1;
        if (pos == 0)
        {
            pos = 4;
        }
        cout << endl;
    }
}