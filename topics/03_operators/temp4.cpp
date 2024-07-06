#include <iostream>
using namespace std;

// Bitwise operator
/*
& -> Bitwise AND
| -> Bitwise OR
^ -> XOR
~ -> Complement
<< -> left shift
>> -> right shift

evaluates at bit level

precedence of {<<, >>} > {&, |, ^}


*/


int main(){

    // &

    cout<<(2&3)<<endl; // 2

    // |

    cout<<(2|3)<<endl; // 3

    // ^

    cout<<(0^0)<<endl; // 0
    cout<<(0^1)<<endl; // 1
    cout<<(1^0)<<endl; // 1
    cout<<(1^1)<<endl; // 0

    // <<

    cout<<(6<<1)<<endl; // 12
    cout<<(6<<2)<<endl; // 24
    cout<<(6<<3)<<endl; // 48
    cout<<(-6<<1)<<endl; // -12

    // >>

    cout<<(12>>2)<<endl; // 3

    // ~

    cout<<(~5)<<endl; // -6
}