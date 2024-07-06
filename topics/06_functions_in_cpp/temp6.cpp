// pass by value

#include <iostream>
using namespace std;

void increment(int n){
    n++;
}

int main(){

    int a = 10;
    cout<<"value of a before increment function: "<<a<<endl;

    increment(a);
    cout<<"value of a after increment function: "<<a<<endl;
}