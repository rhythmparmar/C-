/*#include <iostream>
#include<iomanip>
using namespace std;

class Node{
    private:
            Node *left;
            int info;
            Node *right;
    public:
            Node(){
              left=NULL;
              info=0;
              right=NULL;
         }
         Node(Node *left,int info,Node *right){
          this->left=left;
          this->info=info;
          this->right=right;
         }


         void setInfo(int info){
            this->info=info;
         }

         int getInfo(){
            return info;
         }

         void setRight(Node *right){
            this->right=right;
         }
         Node *getRight(){
            return right;
         }

         void setLeft(Node *left){
          this->left=left;
         }
         Node *getLeft(){
          return(left);
         }

};

class BST{
     private:
             Node *root;
     public:
             BST(){
               root=NULL;
             }

         Node *getRoot(){
             return root;
             }

         void addNode(int);
         void inorder(Node *);
         void preorder(Node *);
         void postorder(Node *);

};

void BST::addNode(int info){
Node *ptr=new Node(NULL,info,NULL);
 if(root==NULL)
    root=ptr;
 else{
    Node *p=root,*prev=NULL;
    while(p!=NULL){
        if(info==p->getInfo()){
            cout<<endl<<"ERROR: duplicate value not allowed";
            return;
        }
        prev=p;
        if(info<p->getInfo()){
            p=p->getLeft();
        }
        else{
            p=p->getRight();
        }
    }

    if(info<prev->getInfo())
        prev->setLeft(ptr);
    else
        prev->setRight(ptr);
 }

}

void BST::inorder(Node *h){
 if(h!=NULL){
    inorder(h->getLeft());
    cout<<setw(5)<<h->getInfo();
    inorder(h->getRight());
 }
}

void BST::preorder(Node *h){
 if(h!=NULL){
    cout<<setw(5)<<h->getInfo();
    preorder(h->getLeft());
    preorder(h->getRight());
 }
}

void BST::postorder(Node *h){
 if(h!=NULL){
    postorder(h->getLeft());
    postorder(h->getRight());
    cout<<setw(5)<<h->getInfo();
 }
}

int main(){
 BST bst;

 bst.addNode(99);

 bst.addNode(120);

 bst.addNode(80);

 bst.addNode(123);

 bst.addNode(110);

 bst.addNode(89);

 cout<<endl<<"INORDER TRAVERSAL:";
 bst.inorder(bst.getRoot());
 cout<<endl<<"PREORDER TRAVERSAL:";
 bst.preorder(bst.getRoot());
 cout<<endl<<"POSTORDER TRAVERSAL:";
 bst.postorder(bst.getRoot());
 return(0);

}



*/











#include<iostream>
#include<vector>

using namespace std;

int main(){

    int arr [4] = {1,2,3,4};

    vector <int> arr = {0};

    for(int i=0;i<3;i++){

        cin>>arr[i];
    }

    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }


return 0;
}






















