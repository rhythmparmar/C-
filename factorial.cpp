#include<iostream>
using namespace std;
int main()
{
    int i,f,n;
    cout<<"Enter Number:";
    cin>>n;
    f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    cout<<"factorial of "<<n<<" is:"<<f;

    return 0;
}
