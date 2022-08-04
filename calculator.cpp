
#include <iostream>
using namespace std;
int main(){
     int n1,n2;
     char choice,op;

     do{

         cout<<"Enter two Number:";
         cin>>n1>>n2;
         cout<<"Enter operator(+,-,*,/,%):";
         cin>>op;

         if(op=='+')
            cout<<"Result:"<<(n1+n2)<<endl;
         else if(op=='-')
            cout<<"Result:"<<(n1-n2)<<endl;
         else if(op=='*')
            cout<<"Result:"<<(n1*n2)<<endl;
         else if(op=='/')
            cout<<"Result:"<<(n1/n2)<<endl;
         else if(op=='%')
            cout<<"Result:"<<(n1%n2)<<endl;
         else
            cout<<"Error Invalid Input:";

        cout<<"\npress y to continue.......";
        cin>>choice;
     }while(choice == 'y');

return 0;
}
