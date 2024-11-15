// scope of a variable

#include <iostream>
using namespace std;

int main(){

    int num = 5;

    {
        int num = 8;
        cout<<num<<endl;
    }

    cout<<num<<endl;



    // cout<<num2<<endl;
    // int num2 = 9;
    // *error* we can not use a variable before initialization. 

    int num3 = 50;
    int num3 = 60;

    cout<<num3<<endl;
}