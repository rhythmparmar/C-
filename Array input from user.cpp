#include <iostream>
using namespace std;
int main(){

int a[5];
int i;
cout<<"Enter Elements:";
for(i=0;i<5;i++){
    cout<<endl<<(i+1)<<":";
    cin>>a[i];
}
cout<<"List Elements:";
for(i=0;i<5;i++){
    cout<<"\t"<<a[i];
}
return(0);
}
