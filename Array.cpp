#include <iostream>
using namespace std;
int main(){

int a[]={10,20,30,40,50};
int i,sum=0;
for(i=0;i<=5;i++){
    sum=sum+a[i];
}
cout<<"Sum of Elements:"<<sum;

return(0);
}
