
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  for(i=1;i<=n;i++){
    cout<<endl;
    for(j=i;j>=1;j--)
      cout<<j;
    for(j=2;j<=i;j++)
      cout<<j;
  }

  return 0;
}
