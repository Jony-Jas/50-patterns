#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count = 0;
    for(int i=1; i <= n; i++)
    {
        count=0;
        for(int j=1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for(int j=1; j <= n-i+1; j++)
        {
            count++;
            cout<<count;
        }
        while(count!=1)
        {
            count--;
            cout<<count;
        }
        cout<<endl;
    }
}