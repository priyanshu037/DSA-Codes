// reference variable

#include <iostream>
using namespace std;

int main(){

    int num = 10;
    cout<<num<<endl;

    int &temp = num;

    temp = temp+1;

    cout<<num<<endl;

}