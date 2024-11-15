#include <iostream>
using namespace std;

int main(){

    // dereference operator -> access values

    int a = 10;

    int *ptr = &a;

    cout<<"value of a is : "<<*ptr<<endl;

    a++;

    cout<<"value of a is : "<<*ptr<<endl;

    int b = 20;
    ptr = &b;

    cout<<"value of b is : "<<*ptr<<endl;

    b = 30;
    cout<<"value of b is : "<<*ptr<<endl;

}