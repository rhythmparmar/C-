#include <iostream>
using namespace std;

int main() {
    int i,sume=0,sumo=0;
    int a[5];
    cout<<"Enter Elements:";
    for(i=0;i<5;i++){
        cin>>a[i];
    }

    for(i=0;i<5;i++){
        if(a[i]%2==0)
           sume+=a[i];
        else
           sumo+=a[i];
    }
    cout<<endl<<"Sum of Even Elements:"<<sume;
    cout<<endl<<"Sum of odd Elements:"<<sumo;


return(0);
}
