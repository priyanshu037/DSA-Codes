// function overloading

#include <iostream>
using namespace std;

void swap_func(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}

void swap_func(float &a, float &b){ // function overloading
    float c;
    c=a;
    a=b;
    b=c;
}

int main(){

    int a = 9;
    int b = 7;

        
    cout<<"value of a before swapping: "<<a<<endl;
    cout<<"value of b before swapping: "<<b<<endl;

    swap_func(a,b);
    cout<<"value of a after swapping: "<<a<<endl;
    cout<<"value of b after swapping: "<<b<<endl;

    float f1 = 4.6;
    float f2 = 7.3;

    cout<<"value of f1 before swapping: "<<f1<<endl;
    cout<<"value of f2 before swapping: "<<f2<<endl;

    swap_func(f1,f2);
    cout<<"value of f1 after swapping: "<<f1<<endl;
    cout<<"value of f2 after swapping: "<<f2<<endl;

}