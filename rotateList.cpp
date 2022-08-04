#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

struct Node{
  int data;
  Node *next;
  Node *prev;
  Node(int d){
    data = d;
  }
};

Node* insertEnd(Node* head, int data){
  Node* node = new Node(data);
  Node *last = head;
  node->next = NULL;   // link new node to NULL as it is last node
  if (head == NULL)  // if list is empty add in beginning.
  {
    head = node;
    node->prev=NULL;
    return head;
  }
  while (last->next != NULL)  // Find the last node
    last = last->next;
  last->next = node;  // Add the node after the last node of list
  node->prev=last;
  return head;
}

// This function prints contents of linked list starting from head
void printList(Node *node)
{
  while (node != NULL)
  {
    cout<<node->data<<' ';
    node = node->next;
  }
}
/* struct Node
{
    int data;
    Node *next;
  	Node *prev;
};

Above structure is used to define the linked list, You have to complete the below functions only */

Node* rotateByK(Node* head, int k)
{
  Node*h=NULL,*p,*start=head;
  int i=1;
  while(head->next!=NULL)
  {
    if(i==k)
    {
      h=head;
      p=head->prev;
      p->next=NULL;
      head->prev=NULL;


    }
    i++;
    head=head->next;
  }
  head->next=start;
  start->prev=head;
  return h;




}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    Node* head = NULL;
    Node* t1;
    int n, m, x;
    cin>>n;
    while(n--)
    {
      cin>>m;
      head = insertEnd(head, m);
    }
    cin>>x;
    t1 = rotateByK(head, x);
    printList(t1);
    cout<<endl;
  }
  return 0;
}
