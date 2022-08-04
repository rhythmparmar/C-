#include <iostream>
using namespace std;
int main(){

int a[]={10,15,30,45,52,65};
int i;

for(i=0;i<6;i++){
   if(a[i]%2==0)
       a[i]=a[i]+5;
   else
       a[i]=a[i]+10;
}
cout<<"Elements after adding 5 to even and 10 to odd:";
for(i=0;i<6;i++)
    cout<<"\t"<<a[i];

  return(0);
}
