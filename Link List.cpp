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


class Linklist{
   private:
           Node *head;
   public:
           Linklist(){
             head=NULL;
           }

        void display();
        void InsertBeg(int);
        void InsertEnd(int);
        void DeleteBeg();
        void DeleteEnd();
        void Sort();
        Node *Search(int);
        bool isEmpty(){
           if(head==NULL)
              return true;
           else
              return false;
           }

};

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

void Linklist::InsertBeg(int info){
 Node *p=new Node(info,head);
 if(p==NULL)
    cout<<endl<<"Error:Overflow";
 else
    head=p;
}

void Linklist::DeleteBeg(){
 if(head==NULL)
    cout<<endl<<"Error:Underflow";
 else{
    Node *p=head;
    head=p->getNext();
    delete p;
 }
}

void Linklist::DeleteEnd(){
 if(head==NULL)
    cout<<endl<<"Error:Underflow";
 else if(head->getNext()==NULL){
    Node *p=head;
    head=NULL;
    delete p;
 }
 else{
    Node *prev=head;
    Node *p=head->getNext();
    while(p->getNext()!=NULL){
        prev=p;
        p=p->getNext();
    }
    prev->setNext(NULL);
    delete p;
 }

}

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

Node *Linklist::Search(int info){
 Node *p=head;
 while(p!=NULL){
    if(p->getInfo()==info)
        return p;
    p=p->getNext();
 }
return NULL;

}
void Linklist::Sort(){
 Node *p1,*p2;

 p1=head;
 while(p1->getNext()!=NULL){
    p2=p1->getNext();
    while(p2!=NULL){
        if(p1->getInfo()>p2->getInfo()){
            int t=p1->getInfo();
            p1->setInfo(p2->getInfo());
            p2->setInfo(t);
        }
        p2=p2->getNext();
    }
    p1=p1->getNext();

  }
}

int main()
{

    Linklist l;

    l.display();
        l.InsertBeg(520);
            l.InsertBeg(330);
                l.InsertBeg(1000);
                    l.InsertBeg(170);
    l.InsertBeg(10);
    l.InsertEnd(20);
    l.InsertBeg(5);
    l.display();
    l.DeleteBeg();

    l.display();
    l.DeleteEnd();
    l.display();
    Node *loc=l.Search(20);
    if(loc==NULL)
        cout<<"\t Not found";
    else
        cout<<"Found";

     cout<<endl<<"Before Sorting: ";
     l.display();

     l.Sort();
     cout<<endl<<"After Sorting: ";
     l.display();

    return 0;
}
