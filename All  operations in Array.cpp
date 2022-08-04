#include <iostream>
using namespace std;
int main(){

  int a[]={-4,-3,-2,-1,1,2,3,4,5,6};
  int i,m,neg=0,pos=0,even=0,odd=0;
  for(i=0;i<=10;i++){
  if(a[i]<0)
    neg++;
  else
    pos++;
  if(a[i]%2==0)
    even++;
  else
    odd++;
  }
  cout<<endl<<pos;
  cout<<endl<<neg;
  cout<<endl<<even;
  cout<<endl<<odd;

return 0;
};

