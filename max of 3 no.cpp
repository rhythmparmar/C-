#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n1,n2,n3,max;
    cout<<"Enter three number:";
    cin>>n1>>n2>>n3;
    if(n1>=n2){
        if(n1>=n3)
            max=n1;
        else
            max=n3;
    }
    else{
        if(n2>=n3)
            max=n2;
        else
            max=n3;
    }
    cout<<"Maximum Value:"<<max;

    return 0;
}
