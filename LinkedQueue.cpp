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


class LinkQueue{
   private:
           Node *front1,*rear;
   public:
           LinkQueue(){
             front1=NULL;
             rear=NULL;
           }

        void display();

        void insertElement(int);
        void removeElement();

        bool isEmpty(){
           if(front1==NULL)
              return true;
           else
              return false;
           }

};

void LinkQueue::insertElement(int info){
 Node *p=new Node(info,NULL);
 if(p==NULL)
    cout<<endl<<"Error:Overflow";
 else{
        if(rear==NULL)
            front1=rear=p;
        else{
            rear->setNext(p);
            rear=p;
        }
     }
}

void LinkQueue::display(){
 if(isEmpty())
    cout<<endl<<"Queue is Empty";
 else{
    cout<<endl<<"Queue Elements are:";
    Node *h=front1;
    while(h!=NULL){
        cout<<"\t"<<h->getInfo();
        h=h->getNext();
    }
  }
}

void LinkQueue::removeElement(){
 if(front1==NULL)
    cout<<endl<<"Error:Underflow";
 else{
    Node *p=front1;
    if(front1==rear)
        front1=rear=NULL;
    else
        front1=front1->getNext();
    delete p;
 }
}

int main()
{

    LinkQueue l;

    l.display();
    l.insertElement(20);
    l.insertElement(21);
    l.insertElement(22);
    l.display();
    l.removeElement();
    l.insertElement(23);
    l.display();

    return 0;
}

