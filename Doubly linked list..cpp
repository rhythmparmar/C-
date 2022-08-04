#include <iostream>
#include<iomanip>
using namespace std;

class Node{
    private:
            Node *prev;
            int info;
            Node *next;
    public:
            Node(){
              prev=NULL;
              info=0;
              next=NULL;
         }
         Node(Node *prev,int info,Node *next){
          this->prev=prev;
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

         void setPrev(Node *prev){
          this->prev=prev;
         }
         Node *getPrev(){
          return(prev);
         }

};

class DoublyLinklist{
   private:
           Node *head,*tail;
   public:
           DoublyLinklist(){
             head=NULL;
             tail=NULL;
           }

        void display();
        void InsertBeg(int);
        void InsertEnd(int);
        void DeleteBeg();
        void DeleteEnd();
        void displayReverse();
        void InsertAfterElement(int,int );
        void DeleteAfterElement(int);
        bool isEmpty(){
           if(head==NULL)
              return true;
           else
              return false;
           }


};

void DoublyLinklist::InsertBeg(int info){
 Node *ptr=new Node(NULL,info,head);
 if(head!=NULL){
    head->setPrev(ptr);
 }
 else{
    tail=ptr;
 }
 head=ptr;
}
void DoublyLinklist::InsertEnd(int info){
 Node *ptr=new Node(tail,info,NULL);
 if(head!=NULL){
    tail->setNext(ptr);
 }
 else{
    head=ptr;
 }
 tail=ptr;
}

void DoublyLinklist::DeleteBeg()
{
        if(head==NULL)
            cout<<endl<<"ERROR: underflow";
        else{
            Node *ptr = head;

            if(head==tail)
                head=tail=NULL;
            else
            {
                head = head->getNext();
                head->setPrev(NULL);
            }
            delete ptr;

        }

}

void DoublyLinklist::DeleteEnd()
{
 if(head==NULL){
    cout<<endl<<"ERROR:underflow";
    return;
}
Node *p=tail;
if(head==tail){
    head=tail=NULL;
}
else{
    tail=p->getPrev();
    tail->setNext(NULL);
}
delete(p);

}

void DoublyLinklist::displayReverse(){
 if(tail==NULL)
    cout<<endl<<"List is Empty";
 else{
    cout<<endl<<"Elements in Reverse Order:"<<endl;
    Node *p=tail;
    while(p!=NULL){
        cout<<setw(5)<<p->getInfo();
        p=p->getPrev();
    }
  }
}

void DoublyLinklist::InsertAfterElement(int info,int after){
 Node *p=head;
 while(p!=NULL && p->getInfo()!=after)
    p=p->getNext();
 if(p==NULL){
    cout<<endl<<"After Element not found";
    return;
 }
 Node *ptr=new Node(p,info,p->getNext());
 p->setNext(ptr);
 if(p==tail){
    tail=ptr;
 }
 else{
    (ptr->getNext())->setPrev(ptr);
  }
}

void DoublyLinklist::DeleteAfterElement(int after){
 if(isEmpty()){
    cout<<endl<<"Error:Underflow";
    return;
 }
 Node *p=head;
 while(p!=NULL && p->getInfo()!=after)
    p=p->getNext();

 if(p==NULL || p==tail){
    cout<<endl<<"Deletion not possible";
    return;
 }
 Node *ptr=p->getNext();
 p->setNext(ptr->getNext());
 if(ptr==tail)
    tail=p;
 else{
    (p->getNext())->setPrev(p);
    delete ptr;
 }
}

void DoublyLinklist::display(){
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

int main()
{
    DoublyLinklist l;

    l.display();
    l.InsertBeg(520);
    l.InsertBeg(330);
    l.InsertBeg(1000);
    l.InsertBeg(170);
    l.display();

    l.DeleteBeg();
    l.display();
    l.displayReverse();
    l.InsertAfterElement(90,520);
    l.display();
    l.DeleteEnd();
    l.display();
    l.DeleteAfterElement(330);
    l.display();
    return (0);
}
