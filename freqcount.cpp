#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int selectionSort(int a[],int n);
int main()
{
  int i,n1,n2,j;

  cin>>n1;

  for(i=0;i<n1;i++)
  {

  	cin>>n2;
    int *p=new int[n2];
    for(j=0;j<n2;j++)
    {
      cin>>p[j];
    }
    cout<<endl<<"Before Sorting"<<endl;
    for(i=0;i<n2;i++)
        cout<<"\t"<<p[i];
    int res =selectionSort(p,n2);
    cout<<endl<<res<<endl;

  }
   return 0;
}

int selectionSort(int a[],int n){
 int i,j,t,k;
 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
  }

  // sorted array
  cout<<endl<<"After Sorting"<<endl;
  for(i=0;i<n;i++)
    cout<<"\t"<<a[i];
  //store number in p1 and its frquency in p2
  int *p1=new int[n];
  int *p2=new int[n];

  j=0;
  p1[j]=a[0];
  p2[j]=1;

  for(i=1;i<n;i++)
  {
    if(a[i]==a[i-1])
      p2[j]=p2[j]+1;
    else
    {
      p1[++j]=a[i];
      p2[j]=1;
    }
  }


  //sort p1 and p2 on the basis of p2

  for(i=0;i<=j;i++){
    for(k=i+1;k<=j;k++){
        if(p2[i]<p2[k]){
            t=p2[i];
            p2[i]=p2[k];
            p2[k]=t;

            t=p1[i];
            p1[i]=p1[k];
            p1[k]=t;

        }
    }
  }
cout<<endl<<"Number \t Frequency"<<endl;
  for(i=0;i<=j;i++)
    cout<<endl<<p1[i]<<"\t"<<p2[i];

  //find highest freq, if same for two or more return smallest number

  int res=p1[0];
//cout<<"\n j= "<<j;
  for(k=1;k<=j;k++)
  {
    if(p2[k]==p2[k-1])
    {

        //cout<<endl<<"-->"<<res;
        if(res>p1[k])
            res=p1[k];
           //cout<<endl<<"-->-->"<<res;
        continue;
    }
    else
        break;
       //cout<<endl<<"-->==="<<res;


  }

return res;
}
