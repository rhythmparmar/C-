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

void insertEnd(Node** head, int data)
{
  Node* node = new Node();
  Node *last = *head;
  node->data  = data;   //  Insert data in new node
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
    Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */

#include<vector>
int  loopInList(Node* head) {
  // Write your code here

  vector<Node*> t;
  int i,count=0,found=0;
  while(head!=NULL)
  {
    count++;
    for(i=0;i<t.size();i++)
    {

      cout<<t[i]<<"\t";
      if(head==t[i])
      {
          found=1;
        break;
      }
    }
    if(found)
      return count-i-1;
    else
  		t.push_back(head);
    head=head->next;
   }
   return 0;
}
int main()
{
  int t,n,m;
  cin>>t;
  while(t--){
    Node *head = NULL;
    Node *t1, *t2;
    int c, k, ans;
    cin>>n;
    while(n--){
      cin>>m;
      insertEnd(&head, m);
    }
    cin>>k>>c;
    if(c>0 && k>0){
      k--;c--;
      t1=head;
      t2=head;
      while(k--) t1 = t1->next;
      while(c--) t2 = t2->next;
      t1->next = t2;
    }
    ans = loopInList(head);
    cout<<ans<<endl;
  }
  return 0;
}
