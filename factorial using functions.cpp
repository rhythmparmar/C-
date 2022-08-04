#include <iostream>
using namespace std;

int factorial(int);     //Function prototype or function declaration
int main(){

int num,f;
cout<<"Enter Number:";
cin>>num;

f=factorial(num);        //Factorial = Function call, num = Actual Argument
cout<<"Factorial:"<<f;
return(0);
}

int factorial(int n){     //function Definition, int n = formal Argument
     int i,f=1;
     for(i=1;i<=n;i++){
        f=f*i;
     }
return(f);
}
