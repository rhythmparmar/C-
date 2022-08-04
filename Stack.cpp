#include <iostream>
using namespace std;

const int M=5;
class Stack{
 private:
         int top;
         int a[M];
 public:
         void push(int);
         void pop();
         void peek();
         void display();
         bool isFull();
         bool isEmpty();

         Stack(){
            top=-1;
         }

};

bool Stack::isFull(){
 if(top==M-1)
    return true;
 else
    return false;
}
bool Stack::isEmpty(){
 if(top==-1)
    return true;
 else
    return false;
}

void Stack::push(int item){
 if(isFull())
    cout<<endl<<"Error:Overflow";
 else
    a[++top]=item;
}
void Stack::pop(){
 if(isEmpty())
    cout<<endl<<"Error:Underflow";
 else
    cout<<endl<<"Item Deleted:"<<a[top--];
}
void Stack::display(){
 if(isEmpty())
    cout<<endl<<"Stack is Empty:";
 else{
    cout<<endl<<"stack Elements are:";
    for(int i=top;i>=0;i--)
        cout<<"\t"<<a[i];
 }
}
void Stack::peek(){
 if(isEmpty())
    cout<<endl<<"Error:Underflow";
 else
    cout<<"Item at top:"<<a[top];

}

int main(){
 Stack s;
 int choice,item;
 do{
    cout<<endl<<"1.push";
    cout<<endl<<"2.pop";
    cout<<endl<<"3.peek";
    cout<<endl<<"4.display";
    cout<<endl<<"5.quit";
    cout<<endl<<"Enter your Choice:";
    cin>>choice;
    switch(choice){
     case 1:
            cout<<endl<<"Enter Element:";
            cin>>item;
            s.push(item);
            break;
     case 2:
            s.pop();
            break;
     case 3:
            s.peek();
            break;
     case 4:
            s.display();
            break;
     case 5:
            break;
     default:
            cout<<endl<<"Error:Invalid Input";

    }
    }while(choice!=5);

    return(0);



};

