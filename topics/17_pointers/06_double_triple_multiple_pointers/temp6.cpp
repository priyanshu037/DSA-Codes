#include <iostream>
using namespace std;

void func(int **p){
    *p = *p + 1;
}

int main(){
    int n = 10;
    int *ptr = &n;

    int **ptr1 = &ptr;

    cout<<ptr<<endl;

    func(ptr1);

    cout<<ptr<<endl;
}