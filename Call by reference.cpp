#include <iostream>
using namespace std;

void swap(int &,int &);
int main(){

 int a=10,b=20;
 swap(a,b);
 cout<<"A="<<a;
 cout<<"\nB="<<b;
 return(0);
}

void swap(int &a,int &b){
 int t=a;
 a=b;
 b=t;
}
