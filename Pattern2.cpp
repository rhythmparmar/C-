#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,i,j;
  int val=1;
  cin>>n;
  for(i=1;i<=n;i++){
    cout<<endl<<endl;
    for(j=1;j<=i;j++){
      cout<<val<<" ";
      val++;
    }

  }
  return 0;
}
