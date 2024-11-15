#include <iostream>
using namespace std;

// arithmetic operator
/*
1. Binary:  +, -, /, *, %(rem)

rules:
a. division between two int values will always return a int.
b. division between float and int will always return a float. (because precedence of double > float > int)
c. precedence of {*, /, %} > {+, -}.
d. according to the rule of associativity when {*, /, %} occurs in the same operation then evaluation will take place from left to rigth.



2. Unary: ++, --

a. post increment: a++
b. pre increment: ++a
c. post decrement: a--
d. pre decrement: --a

*/

int main(){

    // binary operations

    // 1. division
    cout<<13/2<<endl; // 6
    cout<<13.45/2<<endl; // 6.725

    // 2. multiplication
    cout<<13.44*4<<endl; // 53.76
    cout<<45*5<<endl; // 225

    // post increment

    int a = 10;
    int b = a++;
    cout<<b<<endl; // 10
    cout<<a<<endl; // 11

    int num = 20;
    cout<<num++<<endl; // 20
    cout<<num<<endl; // 21

    // pre increment

    int c = 10;
    int d = ++c;
    cout<<d<<endl; // 11
    cout<<c<<endl; // 11

    // post decrement

    int e = 10;
    int f = e--;
    cout<<f<<endl; // 10
    cout<<e<<endl; // 9

    // pre decrement

    int g = 10;
    int h = --g;
    cout<<h<<endl; // 9
    cout<<g<<endl; // 9

}