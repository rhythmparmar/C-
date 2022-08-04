#include <iostream>
using namespace std;

void fillArray(int[],int);
void showArray(int[],int);
void insertElement(int[],int &,int,int);

int main(){
int A[100],n,loc,item;
 cout<<"Enter total Elements:";
 cin>>n;
 if(n>100){
    cout<<"Error: Invalid Input";
    return(0);
 }

fillArray(A,n);
cout<<endl<<"Original list:";
showArray(A,n);
cout<<endl<<"Enter new Element:";
cin>>item;
cout<<endl<<"Enter Location:";
cin>>loc;
if(loc>100)
    cout<<endl<<"Error:Invalid Location";
else
    insertElement(A,n,item,loc);
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

void insertElement(int B[],int &n,int item,int pos){
 int i=n;
 while(i>pos){
    B[i]=B[i-1];
    i--;
 }
 B[pos]=item;
 n++;

}
