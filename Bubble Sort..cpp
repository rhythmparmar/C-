#include <iostream>
using namespace std;

void fillArray(int[],int);
void showArray(int[],int);
void bubbleSort(int[],int);
int main(){

 const int N=5;
 int a[N];
 fillArray(a,N);
 cout<<endl<<"Before Sorting";
 showArray(a,N);
 bubbleSort(a,N);
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

void bubbleSort(int a[],int n){
 int i,j,t;
 for(i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
    }
  }
}
