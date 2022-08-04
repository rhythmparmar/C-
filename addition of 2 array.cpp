#include <iostream>
using namespace std;
int main(){

int a[]={1,2,3,4};
int b[]={5,6,7,8};
int c[4];

int i;
for(i=0;i<4;i++){
    c[i]=a[i]+b[i];
}
cout<<"Final Array: ";
for(i=0;i<4;i++)
{
 cout<<"\t"<<c[i];
}

return(0);
}
