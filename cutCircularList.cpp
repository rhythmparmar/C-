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

Node* listCut(Node* head){
  int count=1;
  Node* p=head,*prev=NULL,*last=NULL;
  while(p->next!=head)
  {
    count++;
    p=p->next;

  }
  last=p;
  int i=1,mid=count/2;
  p=head;
  while(i<=mid)
  {
    prev=p;
    p=p->next;
    i++;
  }
  Node * head2=p;
  prev->next=head;
  last->next=head2;
  return head2;
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
      Node* head1 = listCut(head);
      printList(head);
      cout<<endl;
      printList(head1);
      cout<<endl;
    }
    return 0;
}
