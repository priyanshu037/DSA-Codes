#include <iostream>
using namespace std;

// assignment operator

int main(){

    int a;

    a = 3;
    cout<<a<<endl; // 3

    a*=10; // a = a*3
    cout<<a<<endl; // 30

    a/=3; // a = a / 3
    cout<<a<<endl; // 10

    a+=5; // a = a + 5
    cout<<a<<endl; // 15

    a-=2; // a = a - 2
    cout<<a<<endl; // 13

}