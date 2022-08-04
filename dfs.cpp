#include <iostream>
using namespace std;

int a[50][50],status[50];
const int M=50;

class Stack{
 private:
         int top;
         int a[M];
 public:
         void push(int);
         int pop();
         bool isFull();
         bool isEmpty();

         Stack(){
            top=-1;
         }

};

bool Stack::isFull(){
 if(top==M-1)
    return true;
 else
    return false;
}
bool Stack::isEmpty(){
 if(top==-1)
    return true;
 else
    return false;
}

void Stack::push(int item){
 if(isFull())
    cout<<endl<<"Error:Overflow";
 else
    a[++top]=item;
}
int Stack::pop(){
    return a[top--];
}

void dfs(int s,int n) {
    Stack q;

	q.push(s);
	status[s]=2;
	while(!q.isEmpty()) {
		int p = q.pop();

		cout<<"\t"<<p;
		for(int i=1;i<=n;i++)
		{
            if(a[p][i]==1 && status[i]==1)
            {
                q.push(i);
                status[i]=2;
            }
		}

	}
}
int main(){
    int s,n,i,j;

    cout<<"\n Enter the number of vertices:";
    cin>>n;

    //set status of all vertices to 1
    for (i=1;i<=n;i++) {

        status[i]=1;
    }

    // create adjacency matrix
    cout<<"\n Enter graph data in matrix form:\n";
    for (i=1;i<=n;i++)
      for (j=1;j<=n;j++)
       cin>>a[i][j];


    cout<<"\n Enter the starting vertex:";
    cin>>s;

    dfs(s,n);


    return(0);
};

