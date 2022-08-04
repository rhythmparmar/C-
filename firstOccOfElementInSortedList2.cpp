#include <iostream>
using namespace std;
int BinarySearch(int[],int,int);

int main(){

  int T,N,K,i,j;
  cin>>T;

  for(i=1;i<=T;i++)
  {
    cin>>N;
    cin>>K;

    int *a=new int[N];
    for(j=1;j<=N;j++)
    {
      cin>>a[j];
    }
	int loc=BinarySearch(a,N,K);
 	if(loc==-1)
    	cout<<endl<<loc;
 	else
 	{

    	while(loc>=0 && a[loc]==K)
        	loc--;

    	cout<<endl<<loc;
 	}
  }

 return(0);
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
