// 1: Print the address of the first index of the char array in c++.


#include <iostream>
using namespace std;

int main(){
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = arr;
    
    cout<<(void*)ptr<<endl;
}