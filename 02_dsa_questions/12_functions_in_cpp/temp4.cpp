#include <iostream>
using namespace std;

void Swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int main(){
// 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000. 

    int a, b;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;

    cout<<"Before swapping: a is = "<<a<<" b is = "<<b<<endl;

    Swap(a,b);

    cout<<"After swapping: a is = "<<a<<" b is = "<<b<<endl;
    
}