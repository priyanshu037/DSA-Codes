#include <iostream>
using namespace std;

void func(int &a, int &b, int &c){
    int d=a,e=b,f=c;
    b = d;
    c = e;
    a = f;
}

int main(){
// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

    int a,b,c;
    cout<<"Enter the value of a, b and c: "<<endl;
    cin>>a>>b>>c;

    cout<<"before func value of a: "<<a<<" value of b: "<<b<<" value of c: "<<c<<endl;

    func(a,b,c);
    
    cout<<"after func value of a: "<<a<<" value of b: "<<b<<" value of c: "<<c<<endl;
}