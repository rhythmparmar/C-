#include <iostream>
using namespace std;
void cq1(int y);
int cq2(int ,int);
int cq3(int ,int);
int main()
{
    cq1(21);
}

void cq1(int y) {
       int x = y / 10;
       int z = (x + y);
       x = cq2(z, y);
       cout<<"cq1: x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
   }

int cq2(int x, int y) {
       int z = cq3(x + y, y);
       y /= z;
      cout<<"cq2: x = "<<x<<", y = "<<y<<", z = "<<z<<endl;
       return z;
   }

int cq3(int x, int y) {
       y = x / (x % 10);
       cout<<"cq3: x = "<<x<<", y = "<<y<<endl;
       return y;
   }




