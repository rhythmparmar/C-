#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    Node* t=head;
    if(head == NULL) return;
    do{
        cout<<t->data<<' ';
        t = t->next;
    }while(t != head);
}

Node* insertBeg(Node* head, int data){
    Node *ptr = new Node();
    ptr->data = data;
    ptr->next = NULL;
    struct Node *temp;
    if(ptr == NULL)
        printf("\nOVERFLOW");
    else{
        if(head == NULL){
            head = ptr;
            ptr -> next = head;
        }
        else{
            temp = head;
            while(temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp -> next = ptr;
            head = ptr;
        }
    }
    return head;
}
/* struct Node
{
    int data;
    struct Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

Node* insertSorted(Node* head,int k){
  Node* p = new Node();

  p->data=k;

  Node*ptr=head,*prev=NULL,*last=NULL;

  while(ptr->next!=head)
  {
    if(ptr->data<k)
    {
    	prev=ptr;
    }
    ptr=ptr->next;
  }
  last=ptr;
  if(ptr->data<k)
  {
    ptr->next=p;
    p->next=head;
  }
  else if(prev==NULL)
  {
    p->next=head;
    last->next=p;
    head=p;
  }
  else
  {
    p->next=prev->next;
    prev->next=p;
  }
  return head;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* head = NULL;
        int n,data;
        cin>>n;
      	while(n--){
          cin>>data;
          head = insertBeg(head,data);
        }
      int k;
      cin>>k;
      head = insertSorted(head,k);
      printList(head);
      cout<<endl;
    }
    return 0;
}
