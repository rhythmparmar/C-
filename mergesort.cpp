#include <iostream>
using namespace std;
void fill(int[],int);
void display(int[],int);
void mergeSort(int[],int,int);
void merge(int[],int,int,int);

const int N=5;
int main(){

    int a[N];
    int i;

    fill(a,N);
    cout<<endl<<"Original List: ";
    display(a,N);
    mergeSort(a,0,N-1);
    cout<<endl<<"In Sorted List:";
    display(a,N);
    return (0);
}

void fill(int a[],int n){
 cout<<"Enter Elements:";
  for(int i=0;i<n;i++){
  cout<<endl<<(i+1)<<":";
  cin>>a[i];
 }
}

void display(int a[],int n){
 for(int i=0;i<N;i++){
 cout<<"\t"<<a[i];
    }
}

void mergeSort(int a[],int beg,int end){

 int mid;
 if(beg<end){
    mid=(beg+end)/2;
    mergeSort(a,beg,mid);
    mergeSort(a,mid+1,end);
    merge(a,beg,mid,end);
/*
    cout<<endl;
    for(int i=0;i<N;i++)
        cout<<a[i]<<" ";
*/
 }
}

void merge(int a[],int beg,int mid,int end){
 int l1=mid-beg+1;
 int l2=end-mid;
 int *p1=new int[l1];
 int *p2=new int[l2];
 int left=0,right=0,i;

 //copy left part

 while(left<l1){
    p1[left++]=a[beg+left];
 }
 //copy right part

 while(right<l2){
    p2[right++]=a[mid+right+1];
 }

 //Sort and copy in original array

 left=0;
 right=0;
 i=beg;
 while(left<l1 && right<l2){
    if(p1[left]<p2[right])
        a[i]=p1[left++];
    else if(p2[right]<p1[left])
        a[i]=p2[right++];
    else{
        a[i]=p1[left++];
        a[++i]=p2[right++];
    }
    i++;
}
if(left<l1){
    while(left<l1)
        a[i++]=p1[left++];
}
else{
    while(right<l2)
        a[i++]=p2[right++];

  }

}
