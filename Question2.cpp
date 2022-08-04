#include <iostream>
#include <string.h>
using namespace std;

class Node{
    private:
            char info;
            Node *next;
    public:
            Node(){
              info=' ';
              next=NULL;
         }

         Node(char info,Node *next){
            this->info=info;
            this->next=next;
         }

         void setInfo(char info){
            this->info=info;
         }

         char getInfo(){
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

        void display();
        void Insert(char);
        void InsertEnd(char);
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

void Linklist::Insert(char info){
 Node *p=new Node(info,head);
 if(p==NULL)
    cout<<endl<<"Error:Overflow";
 else
    head=p;
}

void Linklist::InsertEnd(char info){
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

    Linklist l;

    char n[]="INDIA";

    for(int i=0;i<strlen(n);i++)
        l.Insert(n[i]);

    l.display();


    return 0;
}
