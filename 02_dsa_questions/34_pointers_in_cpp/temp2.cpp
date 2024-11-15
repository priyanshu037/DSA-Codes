

#include <iostream>
using namespace std;

int main(){
   // Increment num variable by 5 with the help of Pointer p
   // Don't do num = num+5;
   // Try to change it with the help of *p

    int num = 10;
    int *p = &num;
    cout<<"value of variable num is : "<<*p<<endl;

    *p = *p + 5;

    cout<<"value of variable num is : "<<*p<<endl;



}