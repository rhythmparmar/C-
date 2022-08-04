#include <iostream>
using namespace std;

int binaryToDecimal(string binary);

int main(){

int d;
string bin;

cout<<"Enter Binary : ";
cin>>bin;

cout<<"Decimal:"<<binaryToDecimal(bin);

return 0;
}

int binaryToDecimal(string binary){
  int d=0,i,mul=1,len=binary.length();

  for(i=len-1;i>=0;i--)
  {
      d = d +  (binary[i]-48)*mul;
      mul*=2;
  }
  return d;

}
