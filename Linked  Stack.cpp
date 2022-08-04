#include <iostream>
using namespace std;

class Node{
    private:
            int info;
            Node *next;
    public:
            Node(){
              info=0;
              next=NULL;
         }

         Node(int info,Node *next){
            this->info=info;
            this->next=next;
         }

         void setInfo(int info){
            this->info=info;
         }

         int getInfo(){
            return info;
         }

         void setNext(Node *next){
            this->next=next;
         }

         Node *getNext(){
            return next;
         }

};

class Linkedstack{
 private:
        Node *head;
 public:
        Linkedstack(){
          head=NULL;
        }
        void push(int);
        void pop();
        void display();
        bool isEmpty(){
           if(head==NULL)
              return true;
           else
              return false;
        }

};

void Linkedstack::push(int info){
 Node *p=new Node(info,head);
 if(p==NULL)
    cout<<endl<<"Error:Overflow";
 else
    head=p;
}

void Linkedstack::pop(){
 if(head==NULL)
    cout<<endl<<"Error:Underflow";
 else{
    Node *p=head;
    head=p->getNext();
    delete p;
 }
}
void Linkedstack::display(){
 if(isEmpty())
    cout<<endl<<"Stack is Empty";
 else{
    cout<<endl<<"Stack Elements are:";
    Node *h=head;
    while(h!=NULL){
        cout<<"\t"<<h->getInfo();
        h=h->getNext();
    }
  }
}

int main(){
 Linkedstack l;

 l.display();
 l.push(10);
 l.push(20);
 l.push(30);
 l.display();
 l.pop();
 l.pop();
 l.pop();
 l.pop();

 l.display();
};
