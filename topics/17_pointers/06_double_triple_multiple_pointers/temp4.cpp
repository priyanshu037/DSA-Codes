// 

#include <iostream>
using namespace std;

void func(int *p){
    *p = *p + 5;
}


int main(){

    int n = 10;
    int *ptr = &n;

    func(ptr);

    cout<<n;
}