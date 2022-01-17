#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i <= ceil((float(n)/2)); i++)
    {
        for(int j=1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=ceil((float(n)/2))+1; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
        {
            cout<<n-i+1;
        }
        cout<<endl;
    }
}