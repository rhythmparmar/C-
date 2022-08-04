#include <iostream>
#include <string.h>
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


class Linklist{
   private:
           Node *head;
   public:
           Linklist(){
             head=NULL;
           }

        Node *getHead(){
            return head;
        }
        void display();
        void InsertEnd(int);
        void InsertBeg(int);
        bool isEmpty(){
           if(head==NULL)
              return true;
           else
              return false;
           }

};

void Linklist::display(){
 if(isEmpty())
    cout<<endl<<"List is Empty";
 else{
    cout<<endl<<"List Elements are:";
    Node *h=head;
    while(h!=NULL){
        cout<<"\t"<<h->getInfo();
        h=h->getNext();
    }
  }
}

void Linklist::InsertBeg(int info){
 Node *p=new Node(info,head);
 if(p==NULL)
    cout<<endl<<"Error:Overflow";
 else
    head=p;
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

int main()
{

    Linklist l1,l2,l3;
    int s,c;

    int n1=2478;

    int n2=129;

    // store in list in reverse order

    int i=n1;
    while(i>0)
    {
        l1.InsertEnd(i%10);
        i=i/10;
    }

    i=n2;
    while(i>0)
    {
        l2.InsertEnd(i%10);
        i=i/10;

    }
    Node *h1=l1.getHead();
    Node *h2=l2.getHead();
    c=0;

    while(h1!=NULL && h2!=NULL){
        s=h1->getInfo()+h2->getInfo()+c;

        c=s/10;
        s=s%10;
        h1=h1->getNext();
        h2=h2->getNext();
        l3.InsertBeg(s);

    }

    if(h1!=NULL){
        while(h1!=NULL){
            s=h1->getInfo()+c;
            c=s/10;
            s=s%10;
            l3.InsertBeg(s);
            h1=h1->getNext();
        }

    }
    else if(h2!=NULL){

           while(h2!=NULL){
            s=h2->getInfo()+c;
            c=s/10;
            s=s%10;
            l3.InsertBeg(s);
            h2=h2->getNext();
        }
    }
    else
      {
        if(c!=0)
          l3.InsertBeg(c);

      }
    l1.display();
    l2.display();
    l3.display();


    return 0;
}

