#include <iostream>
using namespace std;

class Student{                                                      // CLASS
 private:                                                           // ''
         int roll;                   //member variable              // ''
         char name[20];              //member variable              // ''
         int marks;                  //member variable              // ''
 public:                                                            // ''
        void storeDetails();         // function Declaration        // ''
        void showDetails();          // function Declaration        // ''
                                                                    // ''
};                                                                  // CLASS

void Student::storeDetails(){
 cout<<endl<<"Enter Student details:";
 cout<<endl<<"\t Name:";
 cin>>name;
 cout<<endl<<"\t Roll Number:";
 cin>>roll;
 cout<<endl<<"\t Marks:";
 cin>>marks;
}

void Student::showDetails(){
 cout<<endl<<"roll No.:"<<roll;
 cout<<endl<<"Name:"<<name;
 cout<<endl<<"Marks:"<<marks;
}

int main(){
 /*Student s1,s2;
 s1.storeDetails();               // s1. is Invoking Object
 s2.storeDetails();               // s2. is Invoking Object

 s1.showDetails();
 s2.showDetails();

}

 // accessing through pointer variable

 Student *p;   // p is declared as pointer variable of type Student
 p=&s1;        // address of s1 object is assigned in p

 p->showDetails();   // use arrow operator to access member functions and variables



 return(0);*/



 const  int N=2;
 Student s[2];
 int i;

 for(i=0;i<N;i++){
    cout<<endl<<"**************************"<<endl;
    s[i].storeDetails();
 }
 cout<<endl<<"Student Details";
 for(i=0;i<N;i++){
    s[i].showDetails();
 }

};



