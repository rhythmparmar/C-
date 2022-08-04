
#include <iostream>
using namespace std;

void moveElements(int arr[], int n){
    int i,t,loc=0;

    for(i=0;i<n;i++)
    {

        if(arr[i]>=0)
        {
            t=arr[i];
            for(int j=i;j>loc;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[loc]=t;
            loc++;
        }
    }

    /*
int i,j,loc,temp;
  loc=-1;

  for(i=0;i<n;i++){
    if(arr[i]<0){
      loc=i;
      continue;
    }

    else{
      temp=arr[i];
      for(j=i;j>loc;j--)
        arr[j]=arr[j-1];
      arr[loc]=temp;
      loc=i;
    }
  }
  */
}

int main()
{

    int b[]={-6,7,13,10,-8,15,5,-9,2,-1};

    cout<<"original: ";
    for(int i=0;i<10;i++)
        cout<<"\t"<<b[i];
    moveElements(b,10);

    cout<<endl<<"Modified: ";
    for(int i=0;i<10;i++)
        cout<<"\t"<<b[i];
}
