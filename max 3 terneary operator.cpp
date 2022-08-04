#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n1,n2,n3,max;
    cout<<"Enter three number:";
    cin>>n1>>n2>>n3;
    max=(n1>=n2)?((n1>=n3)?n1:n3):((n2>=n3)?n2:n3);
    cout<<"Maximum Value:"<<max;

    return 0;
}