#include <iostream>
#include<vector>
using namespace std;

vector<int> selectionSort1(vector<int>);
int arraysEqualorNot(vector<int> A, vector<int> B);
void display(vector<int> a);

int main(){


 vector<int> a,b;

 a.push_back(11);
 a.push_back(12);
 a.push_back(13);
 a.push_back(12);
 a.push_back(13);


 b.push_back(12);
 b.push_back(11);
 b.push_back(12);
 b.push_back(13);
 b.push_back(13);

 cout<<endl<<"before sorting"<<endl;
 display(a);
 display(b);


 a=selectionSort1(a);
 b=selectionSort1(b);

 cout<<endl<<"after sorting"<<endl;
 display(a);
 display(b);

 cout<<endl<<arraysEqualorNot(a,b);


return 0;
}
void display(vector<int> a)
{
    cout<<endl;
    for(int i=0;i<a.size();i++)
        cout<<"\t"<<a[i];
}
vector<int> selectionSort1(vector<int>A){
 int i,j,t;
 for(i=0;i<A.size();i++){
    for(j=i+1;j<A.size();j++){
        if(A[i]>A[j]){
            t=A[i];
            A[i]=A[j];
            A[j]=t;
        }
    }
  }
  return A;

}

int arraysEqualorNot(vector<int> A, vector<int> B){

 for(int i=0;i<A.size();i++)
 {

    if(A[i]!=B[i])
        return 0;

 }
 return 1;
}
