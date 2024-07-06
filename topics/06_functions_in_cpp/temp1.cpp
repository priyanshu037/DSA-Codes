// functions
/*
advantages:

1. Reusability
2. Readability

syntax:

return_type function_name(para1, para2, para3...){
    {
        code
    }

    return value;
}

return_type: void, int, float, double, char etc...
function_name: according to what the function is doing
*/

#include <iostream>
using namespace std;

// prime number function

bool prime(int n){
    if(n<2){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


// factorial function

int fact(int n){ // function declare
    int ans = 1;                   // function define
    for(int i=1; i<=n; i++){
        ans = ans * i;
    }
    return ans; // return value
}

int main(){

    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;


    // function call
    cout<<a<<" is prime or not: "<<prime(a)<<endl; 
    cout<<b<<" is prime or not: "<<prime(b)<<endl;

    cout<<"factorial of "<<a<<" is: "<<fact(a)<<endl;
    cout<<"factorial of "<<b<<" is: "<<fact(b)<<endl;
}