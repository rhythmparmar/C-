#include <iostream>
using namespace std;

void fillArray(int[],int);
void showArray(int[],int);
void deleteElement(int[],int &,int);

int main(){
 int A[100],n,loc;
 cout<<"Enter Total Elements:";
 cin>>n;
 if(n>100){
    cout<<"Error:Invalid Input";
    return(0);
 }

 fillArray(A,n);
 cout<<endl<<"Original List:";
 showArray(A,n);
 cout<<endl<<"Enter Location:";
 cin>>loc;
 if(loc>n)
    cout<<endl<<"Error:Invalid Location";
 else
    deleteElement(A,n,loc);
 cout<<endl<<"Modified List:";
 showArray(A,n);
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

void deleteElement(int B[],int &n,int pos){
 int i=pos;
 while(i<n-1){
    B[i]=B[i+1];
    i++;
 }
 n--;
}
