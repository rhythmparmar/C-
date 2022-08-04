#include <iostream>
using namespace std;
void fillArray(int[],int);
void showArray(int[],int);
int linearSearch(int[],int,int);

int main(){

 const int N=5;
 int a[N],item,loc;
 fillArray(a,N);
 cout<<endl<<"Enter Search Element:";
 cin>>item;
 loc=linearSearch(a,N,item);
 if(loc==-1)
    cout<<endl<<"Search Element not found";
 else
    cout<<endl<<item<<" found at "<<(loc+1)<<" position";
 return(0);
}

void fillArray(int B[],int n){
 cout<<endl<<"Enter Elements:";
 for(int i=0;i<n;i++){
    cout<<endl<<(i+1)<<":";
    cin>>B[i];
 }
}
void showArray(int B[],int n){
 for(int i=0;i<n;i++){
    cout<<"\t"<<B[i];
  }
}

int linearSearch(int a[],int n,int item){
 for(int i=0;i<n;i++){
    if(a[i]==item)
        return(i);
 }
 return (-1);
}
