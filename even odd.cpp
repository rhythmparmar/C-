#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int x,rem;
    cout<<"Enter number:";
    cin>>x;
    rem = x%2;
    if(rem==0)
        cout<<"Even Number";
    else
        cout<<"Odd Number";

    return 0;
}