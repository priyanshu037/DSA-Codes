#include <iostream>
using namespace std;

int main(){

    // size of pointer
    /*
    - for 32 bit system size of pointer is 4 bytes
    - for 64 or greater bit system size of pointer is 8 bytes
    */

    int a = 10;

    int *ptr = &a;

    cout<<sizeof(ptr)<<endl; // 8
}