#include <iostream>
using namespace std;

int main(){

    char arr[5] = "1234";
    char *ptr = arr;

    // print values
    cout<<arr<<endl; // 1234
    cout<<ptr<<endl; // 1234

    // print address
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    // using static_cast

    cout<<static_cast<void*>(arr)<<endl;
}