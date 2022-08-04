#include <iostream>
using namespace std;
int main(){

int a[4];
int b[4];
int c[4];
int i;

cout<<"Enter Elements in array 1:";
for(i=0;i<4;i++){
    cin>>a[i];
}

cout<<"Enter Elements in array 2:";
for(i=0;i<4;i++){
    cin>>b[i];
}

for(i=0;i<4;i++){
    c[i]=a[i]+b[i];
}

cout<<"The sum of 2 array is:";
for(i=0;i<4;i++){
cout<<"\t"<<c[i];
}


return(0);
}
