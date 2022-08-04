#include <iostream>
#include<iomanip>
using namespace std;

//void fillArray(int[][3],int,int);
//void showArray(int[][3],int,int);

void fillArray(int a[][3],int r,int c){
 int i,j;
 cout<<endl<<"Enter Matrix Elements:";
 for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cout<<endl<<"->";
        cin>>a[i][j];
    }
  }
}
 void showArray(int a[][3],int r,int c){
  cout<<endl<<"Matrix Elements";
  int i,j;
  for(i=0;i<r;i++){
    cout<<endl;
    for(j=0;j<c;j++){
        cout<<setw(5)<<a[i][j];           //setw = set width
    }
  }
}

int main()
{
 int a[2][3];
 fillArray(a,2,3);
 showArray(a,2,3);
 return(0);
}

