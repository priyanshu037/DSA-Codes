#include <iostream>
using namespace std;

int main(){


    int arr[] = {1,2,3,4,5};

    int *ptr = arr;

    cout<<*ptr<<endl;

    // addition
    ptr = ptr + 3;

    cout<<*ptr<<endl;

    // subtraction
    ptr = ptr - 2;
    cout<<*ptr<<endl;
}