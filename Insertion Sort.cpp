#include <iostream>
using namespace std;
void fillArray(int[],int);
void showArray(int[],int);
void insertionSort(int[],int);
int main(){

 const int N=5;
 int a[N];
 fillArray(a,N);
 cout<<endl<<"Before sorting";
 showArray(a,N);
 insertionSort(a,N);
 cout<<endl<<"After Sorting";
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

void insertionSort(int a[],int n){
 int i,j,t;
 for(i=1;i<n;i++){
    j=i-1;
    t=a[i];
    while(j>=0 && a[j]>t){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=t;
 }
}
