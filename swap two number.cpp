#include <iostream>
using namespace std;

int swapnums(int a,int b){

   int temp;

   temp=a;
   a=b;
   b=temp;
   cout<<"a: "<<a<<"\n";
   cout<<"b: "<<b<<"\n";
   return 0;

}
int main(){

 swapnums(100,200);
 return 0;

}
