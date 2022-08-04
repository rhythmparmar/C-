#include <iostream>
using namespace std;
int main(){

 int a[5];
 int i,j,t;
 cout<<"Enter Elements:"<<endl;

 for(i=0;i<5;i++)
    cin>>a[i];

 for(i=0,j=4;i<j;i++,j--){
    t=a[i];
    a[i]=a[j];
    a[j]=t;
 };
cout<<"Reversed array is:";
for(i=0;i<5;i++)
    cout<<"\t"<<a[i];

return(0);
};
