// 2: Print the address of the char variable in c++.

#include <iostream>
using namespace std;

int main(){
    char name = 'a';
    char *ptr = &name;

    cout<<(void*)ptr<<endl;
}