#include <iostream>
#include<conio.h>
using namespace std;

class Node{
     private:
             int info;
             Node *next;

     public:
             Node(){
                int info=0;
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

class Linklist{

       private:
                Node *head;

       public:
                Linklist(){
                  head=NULL;
                }

                void InsertBeg(int);
                void InsertEnd(int);
                void display();
                bool isEmpty(){
                  if(head==NULL)
                    return true;
                  else
                    return false;
                }


};

void Linklist::InsertBeg(int info){
Node *p=new Node(info,head);
  if(p==NULL)
    cout<<endl<<"Error:Overflow";
  else
    head=p;
//getch();
}

void Linklist::InsertEnd(int info){
 Node *p=new Node(info,NULL);
  if(p==NULL)
    cout<<endl<<"Error:Overflow";

  else{
         if(head==NULL)
             head=p;
         else{
            Node *last=head;
            while(last->getNext()!=NULL)
                 last=last->getNext();
            last->setNext(p);
     }
  }

}

void Linklist::display(){
 if(isEmpty()){
    cout<<endl<<"List is empty";
 }
 else{
    Node *h=head;
    while(h!=NULL){
        cout<<"\t"<<h->getInfo();
        //getch();
    h=h->getNext();
    }
 }

}
int main(){
 Linklist l;

 l.InsertBeg(10);
 l.InsertBeg(20);
 l.InsertBeg(30);
 l.display();
 return 0;
}
