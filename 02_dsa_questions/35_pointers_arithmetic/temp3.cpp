// 3: Print the address of String in c++.


#include <iostream>
using namespace std;

int main(){
    char str[6] = "hello";
    char *ptr = str;

    cout<<&ptr<<endl;
}   