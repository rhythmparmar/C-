#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void forwardPrint(struct Node* head)
{
    if (head == NULL)
       return;

    cout<<head->data<<" ";
    forwardPrint(head->next);
}

void insertEnd(struct Node** head, int data)
{
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    struct Node *last = *head;
    node->data  = data;     //  Insert data in new node
    node->next = NULL;   // link new node to NULL as it is last node
    if (*head == NULL)  // if list is empty add in beginning.
    {
       *head = node;
       return;
    }
    while (last->next != NULL)  // Find the last node
        last = last->next;
    last->next = node;  // Add the node after the last node of list
    return;
}

/* struct Node
{
    int data;
    struct Node* next;
};
Above structure is used to define the linked list, You have to complete the below functions only */

struct Node * shiftSmallLarge(struct Node *org)
{
  int i,t,m;
  Node* madd;
  Node* h=org;
  //find smallest node
  m=h->data;
  madd=h;
  h=h->next;
  while(h!=NULL)
  {
    if(h->data<m)
    {
      m=h->data;
  	  madd=h;


    }
    h=h->next;
  }

  //shift smallest node to head
  h=org;
  i=h->data;
  h->data=m;
  h=h->next;
  while(h!=madd)
  {
    t=h->data;
    h->data=i;
    i=t;
    h=h->next;
  }
  madd->data=i;

    //find largest node
  m=h->data;
  madd=h;
  h=h->next;
  while(h!=NULL)
  {
    if(h->data>m)
    {
      m=h->data;
  	  madd=h;


    }
    h=h->next;
  }

  //shift largest node to tail
  h=madd->next;
  madd->data=h->data;
  while(h->next!=NULL)
  {

    h->data=(h->next)->data;

    h=h->next;
  }
  h->data=m;

  return org;

}
int main()
{
  int t,n,m;
  cin>>t;
  while(t--)
  {
    struct Node* head = NULL;
    cin>>n;
    while(n--)
    {
      cin>>m;
      insertEnd(&head, m);
    }
    head = shiftSmallLarge(head);
    forwardPrint(head);
    cout<<endl;
  }
  return 0;
}
