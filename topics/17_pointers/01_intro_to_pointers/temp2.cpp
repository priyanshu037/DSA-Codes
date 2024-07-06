#include <iostream>
using namespace std;

int main(){

    // print address of any variable

    int a = 10;

    cout<<"address of variable a is : "<<&a<<endl;

    // pointers -> store address

    int b = 20;
    int *ptr = &b; // ptr is pointing to int type value

    cout<<"address of variable b is : "<<ptr<<endl;

    char c = 'a';
    char *ptr2 = &c; // ptr is pointing to char type value

    cout<<"address of variable c is : "<<ptr2<<endl;

    float f = 3.1;
    float *ptr3 = &f;

    cout<<"address of variable f is : "<<ptr3<<endl;




    // why mention data type in pointer declaration
    // because by mentioning data type the ptr can know how much block of memory it has to read.
}