#include <iostream>
using namespace std;
int main(){

int n,mid,i;
cout<<"Enter Number:";
cin>>n;
mid=n/2;
for(i=2;i<=mid;i++){
    if(n%i==0)
        break;
}
if(i>mid)
    cout<<"Prime Number";
else
    cout<<"Not Prime Number";
return(0);
}
