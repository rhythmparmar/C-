#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n,i,j,end,s,e;
  int val;
  cin>>n;
  end=n+n-1;

  s=n;
  e=n;
  for(i=1;i<=n;i++){
    cout<<endl;
    val=0;
    for(j=1;j<=end;j++){

        if(i==1)
        {
            if(j<=e)
                cout<<++val;
            else if(j>=s)
                cout<<--val;

        }
        else
        {
            if(j<=e)
                cout<<++val;
            else if(j>=s)
                cout<<val--;
            else
                cout<<"*";
        }


    }
    e--;
    s++;
  }
  return 0;
}
