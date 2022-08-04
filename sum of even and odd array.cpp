#include <iostream>
using namespace std;
int main(){

int a[5];
int i,sumo=0,sume=0;
cout<<"Enter Elements:";
for(i=0;i<5;i++){
    cout<<endl<<(i+1)<<":";
    cin>>a[i];
}

for(i=0;i<5;i++)
{

    if(a[i]%2==0)
        sume+=a[i];
    else
        sumo+=a[i];
}

cout<<endl<<"Sum of even elements: "<<sume;
cout<<endl<<"Sum of odd elements: "<<sumo;
return(0);
}
