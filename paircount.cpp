#include <iostream>
using namespace std;
void fillArray(int[],int);
void showArray(int[],int);
int getPairsCount(int arr[], int n, int k);

int main(){

 const int N=5;
 int a[N],count,k;
 fillArray(a,N);
 cout<<endl<<"Enter number:";
 cin>>k;
 count=getPairsCount(a,N,k);
 cout<<endl<<"Total Pairs: "<<count;
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

int getPairsCount(int arr[], int n, int k){
	int i,j,count=0;
	for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(arr[i]+arr[j]==k)
        {
          count++;
          break;
        }
      }
    }
  	return count;
}
