#include<iostream>
#include<algorithm>
using namespace std;
class Edge
{
        int source;
        int dest;
        int wt;
};
int main()
{
        int V, E, sv,dv,weight;
        cin>>V>>E;
        Edge *Input= new Edge[E];
        for(int i=0;i<E;i++)
        {
            cin>>sv>>dv>>weight;
                Input[i].source=sv;
                Input[i].dest=dv;
                Input[i].wt=weight;
   }//added your edges

   kruskal(Input,V, E);
        return 0;
}

void kruskal(Edge *Input, int V, int E)
{
// sort the input array of edges in increasing order
sort(Input+0, Input+E, compare);

Edge *output= new Edge[V-1];

int *parent=new int[V];
for(int i=0;i<V;i++)
   parent[i]=i;  // initializing the parent
int i=0;
int Count=0;
while(Count!=V-1)
{
//first edge
Edge CurrentEdge=input[i];
// check whether it is safe or not
int SourceParent=findParent(CurrentEdge.source, parent);
int destparent= findParent(CurrentEdge.dest,parent);

if (SourceParent!=destParent)
    (
//        add to output;

    output[count]=CurrentEdge;
    count++;
    parent[SourceParent]=destparent;
        )
i++;
}

        print Output array of edges
        for loop
            sum=sum+output[i].wt


}// kruskal end
bool compare(Edge e1, Edge e2)
{
return e1.wt<e2.wt;
}

int findParent(int vertex, int *parent)
{
        if(Parent[vertex]==vertex)
            return vertex;

        return findParent(Parent[vertex],Parent);

}
