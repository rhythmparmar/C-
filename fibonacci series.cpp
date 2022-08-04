#include <iostream>
using namespace std;
int main(){

int a,b,c,n,i;
cout<<"Enter Length of series:";
cin>>n;
a=0;
b=1;
cout<<"Fibonacci Series";
for(i=0;i<n;i++){
    cout<<"\t"<<a;
    c=a+b;
    a=b;
    b=c;
}
return(0);
}
