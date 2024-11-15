// swap two numbers

#include <iostream>
using namespace std;

void swap_func(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
}

int main(){

    int a=10,b=20;
    
    cout<<"value of a before swapping: "<<a<<endl;
    cout<<"value of b before swapping: "<<b<<endl;

    swap_func(a,b);
    cout<<"value of a after swapping: "<<a<<endl;
    cout<<"value of b after swapping: "<<b<<endl;
}