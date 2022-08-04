#include <iostream>
using namespace std;

int main(){
 int A[]={1,2,30,44,70};
 int i;
 for(i=0;i<5;i++){
    if(A[i]%5==0){
        A[i]=A[i]+20;
        }
}
for(i=0;i<5;i++){
    cout<<"\t"<<A[i];
}
}


