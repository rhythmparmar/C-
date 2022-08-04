#include <iostream>
using namespace std;
void fillArray(int[],int);
void showArray(int[],int);
int BinarySearch(int[],int,int);

int main(){

 const int N=5;
 int a[N],item,loc;
 fillArray(a,N);
 cout<<endl<<"Enter Search Element:";
 cin>>item;
 loc=BinarySearch(a,N,item);
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

int BinarySearch(int b[],int n,int item){
 int beg,end,mid;
 beg=0;
 end=n-1;
 while(beg<=end){
    mid=(beg+end)/2;
    if(b[mid]==item)
        return(mid);
    if(item<b[mid])
        end=mid-1;
    else
        beg=mid+1;
 }
return(-1);
}
