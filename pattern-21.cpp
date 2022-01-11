#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<i; j++)
        {
            if(j%2 == 0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        for(int j=i; j>1; j--)
        {
            if(j%2 == 0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<"\n";
    }
}