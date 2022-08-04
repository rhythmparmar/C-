#include <iostream>
using namespace std;

int a[50][50],status[50];
const int M=50;
class Queue{
 private:
         int front,rear;
         int a[M];
 public:
         void insert(int);
         int remove();
         bool isFull();
         bool isEmpty();

         Queue(){
            front=rear=-1;
         }

};

bool Queue::isFull(){
 if(rear==M-1)
    return true;
 else
    return false;
}
bool Queue::isEmpty(){
 if(front==-1)
    return true;
 else
    return false;
}

void Queue::insert(int item){
 if(isFull())
    cout<<endl<<"Error:Overflow";
 else
 {
   a[++rear]=item;
   if(front==-1)
      front=0;
 }
}
int Queue::remove(){
    int item = a[front];
    if(rear==front)
        rear=front=-1;
    else
        front++;

    return item;
  }


void bfs(int s,int v) {
    Queue q;

	q.insert(s);
	status[s]=2;
	while(!q.isEmpty()) {
		int p = q.remove();

		cout<<"\t"<<p;
		for(int i=1;i<=v;i++)
		{
            if(a[p][i]==1 && status[i]==1)
            {
                q.insert(i);
                status[i]=2;
            }
		}

	}
}
int main(){
    int s,v,i,j;

    cout<<"\n Enter the number of vertices:";
    cin>>v;

    //set status of all vertices to 1
    for (i=1;i<=v;i++) {

        status[i]=1;
    }

    // create adjacency matrix

    cout<<"\n Enter graph data in matrix form:\n";
    for (i=1;i<=v;i++)
      for (j=1;j<=v;j++)
       cin>>a[i][j];


    cout<<"\n Enter the starting vertex:";
    cin>>s;

    bfs(s,v);


    return(0);
};

