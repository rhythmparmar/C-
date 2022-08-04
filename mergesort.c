#include <iostream>
using namespace std;

void fill(int[],int);
void display(int[],int);

const int N=5;
int main(){

    int a[N];
    int i;

    fill(a,N)

    cout<<endl<<"Original List: ";
    display(a,N);

}

void fill(int a[],int n)
{

    cout<<"Enter Elements:";
    for(int i=0;i<n;i++){
        cout<<endl<<(i+1)<<":";
        cin>>a[i];
    }
}
void display(int a[],int n)
{

    for(i=0;i<N;i++){
        cout<<"\t"<<a[i];
    }
}
