#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n1,n2,max;
    cout<<"Enter two numbers:";
    cin>>n1>>n2;
    max=(n1>=n2)?n1:n2;
    cout<<"Maximum value:"<<max;

    return 0;
}