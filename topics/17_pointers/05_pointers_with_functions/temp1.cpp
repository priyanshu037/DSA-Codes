// pass by pointer

#include <iostream>
using namespace std;

void incr(int *ptr){
    *ptr = *ptr+1;
}

int main(){

    int num = 10;
    cout<<"value of num before incrementing : "<<num<<endl;

    incr(&num);
    cout<<"value of num after incrementing : "<<num<<endl;
}