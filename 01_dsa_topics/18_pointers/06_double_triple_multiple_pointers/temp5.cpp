#include <iostream>
using namespace std;

void func(int *p){
    p++;
}

int main(){
    int n = 10;
    int *ptr = &n;
    cout<<ptr<<endl;

    func(ptr);
    
    cout<<ptr<<endl;
}