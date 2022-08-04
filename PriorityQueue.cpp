#include <iostream>
using namespace std;

class Node{
    private:
            int info,priority;
            Node *next;
    public:
            Node(){
              info=0;
              next=NULL;
         }

         Node(int info,int priority,Node *next){
            this->info=info;
            this->next=next;
            this->priority=priority;
         }

         void setInfo(int info){
            this->info=info;
         }

         int getInfo(){
            return info;
         }
         void setPriority(int priority){
            this->priority=priority;
         }

         int getPriority(){
            return priority;
         }

         void setNext(Node *next){
            this->next=next;
         }

         Node *getNext(){
            return next;
         }

    };


class PriorityQueue{
   private:
           Node *front,*rear;
   public:
           PriorityQueue(){
             front=NULL;
             rear=NULL;
           }

        void display();

        void insert(int,int);
        void remove();

        bool isEmpty(){
           if(front==NULL)
              return true;
           else
              return false;
           }

};

void PriorityQueue::insert(int info,int priority){
 Node *ptr=new Node(info,priority,NULL);

 if(front==NULL)
    front=rear=ptr;
 else if(priority<front->getPriority())
 {

     ptr->setNext(front);
     front=ptr;
 }
 else
 {
     Node *h=front;
     Node *prev=NULL;

     while(h!=NULL && priority>=h->getPriority()){
        prev=h;
        h=h->getNext();
     }
     ptr->setNext(h);
     prev->setNext(ptr);

     if(h==NULL)
        rear=ptr;
 }
}

void PriorityQueue::display(){
 if(isEmpty())
    cout<<endl<<"Queue is Empty";
 else{
    cout<<endl<<"Queue Elements are:";
    Node *h=front;
    while(h!=NULL){
        cout<<"\t"<<h->getInfo()<<" ["<<h->getPriority()<<"]";
        h=h->getNext();
    }
  }
}

void PriorityQueue::remove(){
 if(front==NULL)
    cout<<endl<<"Error:Underflow";
 else{
    Node *p=front;
    if(front==rear)
        front=rear=NULL;
    else
        front=front->getNext();
    delete p;
 }
}

int main()
{

    PriorityQueue l;

    l.display();
    l.insert(20,2);
    l.insert(21,1);
    l.insert(22,4);
    l.display();
    l.insert(23,3);
    l.insert(25,3);
    l.display();

    return 0;
}
