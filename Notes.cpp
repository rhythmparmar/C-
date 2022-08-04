#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n>=2000){
    cout<<n/2000;
    n=n%2000;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=500){
    cout<<n/500;
    n=n%500;
  }
  else
    cout<<"0";
cout<<" ";
  if(n>=100){
    cout<<n/100;
    n=n%100;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=50){
    cout<<n/50;
    n=n%50;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=20){
    cout<<n/20;
    n=n%20;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=10){
    cout<<n/10;
    n=n%10;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=5){
    cout<<n/5;
    n=n%5;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=2){
    cout<<n/2;
    n=n%2;
  }
  else
    cout<<"0";
  cout<<" ";
  if(n>=1){
    cout<<n/1;
    n=n%1;
  }
  else
    cout<<"0";

     return 0;
}
