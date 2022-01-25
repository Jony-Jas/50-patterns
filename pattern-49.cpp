#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i=0;i<ceil(float(n)/2);i++)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<j+(i*n*2)<<" ";
    }
    cout<<endl;
  }
  for(int i=floor(float(n)/2)-1;i>=0;i--)
  {
    for(int j=1;j<=n;j++)
    {
      cout<<j+(i*n*2)+n<<" ";
    }
    cout<<endl;
  }
} 