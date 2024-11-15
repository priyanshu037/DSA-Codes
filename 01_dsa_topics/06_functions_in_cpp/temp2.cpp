#include <iostream>
using namespace std;

// sum of 2 numbers

int sum(int a, int b){
    int c = a+b;
    return c;
}


// Multiplication of 2 numbers

int mul(int a, int b){
    int c=a*b;
    return c;
}


int main(){
    int a=9;
    int b=7;

    int ans = sum(a,b);
    cout<<ans<<endl;

    int ans2 = mul(a,b);
    cout<<ans2<<endl;
}