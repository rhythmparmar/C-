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
    struct Node *next;
  	struct Node *prev;
};

Above structure is used to define the linked list, You have to complete the below functions only */

void swapNodes(Node** head, int x, int y){
  // Write your code here

  Node *p1=NULL,*p2=NULL,*h;

  int i=1;
  h=*head;
  while(h!=NULL)
  {
    if(i==x)
      p1=h;
    if(i==y)
      p2=h;
    if(p1!=NULL && p2!=NULL)break;
    h=h->next;
    i++;
  }
  i=p1->data;
  p1->data=p2->data;
  p2->data=i;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    Node* head = NULL;
    int n, m, x, y;
    cin>>n;
    while(n--){
      cin>>m;
      head = insertEnd(head, m);
    }
    cin>>x>>y;
    swapNodes(&head, x, y);
    printList(head);
    cout<<endl;
  }
  return 0;
}
