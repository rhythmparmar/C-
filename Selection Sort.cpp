#include <iostream>
using namespace std;
void fillArray(int[],int);
void showArray(int[],int);
void selectionSort(int[],int);
int main(){

 const int N=5;
 int a[N];
 fillArray(a,N);
 cout<<endl<<"Before sorting:";
 showArray(a,N);
 selectionSort(a,N);
 cout<<endl<<"After Sorting:";
 showArray(a,N);
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

void selectionSort(int a[],int n){
 int i,j,t;
 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
  }
}
