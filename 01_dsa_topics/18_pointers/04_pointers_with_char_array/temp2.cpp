#include <iostream>
using namespace std;

int main(){
    char name = 'a';

    // print address

    cout<<(void*)&name<<endl;

    // print address using pointer

    char *ptr = &name;

    cout<<(void*)ptr<<endl;

    // print address using static_cast<void>(ptr)

    cout<<static_cast<void*>(ptr)<<endl;
}