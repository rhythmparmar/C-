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

            void removeList()
            {
                Node *p,*h=head;

                while(h!=NULL)
                {
                    p=h;
                    h = h->getNext();
                    delete p;

                }

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

void Linklist::InsertEnd(char info){
 Node *p=new Node(info,head);
 if(p==NULL)
    cout<<endl<<"Error:Overflow";
 else
    head=p;
}

void Linklist::Insert(char info){
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



    char str[100];

    int choice;
    do{


    cout<<endl<<"1.Store in order";
    cout<<endl<<"2.Store in reverse order";
    cout<<endl<<"3.quit";
    cout<<endl<<"Enter your Choice:";
    cin>>choice;
    switch(choice){
     case 1:{
            cout<<endl<<"Enter String:";
            cin>>str;
            Linklist l;
            for(int i=0;i<strlen(str);i++)
                l.Insert(str[i]);

            l.display();
            l.removeList();
            break;}
     case 2:{
            cout<<endl<<"Enter String:";
            cin>>str;
            Linklist ll;
            for(int i=0;i<strlen(str);i++)
                ll.InsertEnd(str[i]);
            ll.display();
            ll.removeList();
            break;}
     case 3:
            break;
     default:
            cout<<endl<<"Error:Invalid Input";

    }
    }while(choice!=3);

    return 0;
}
