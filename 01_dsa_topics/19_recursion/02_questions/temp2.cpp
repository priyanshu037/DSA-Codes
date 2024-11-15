// print from 1 to n by taking only one argument using recursion

#include <iostream>
using namespace std;

void func(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    func(n-1);
    cout<<n<<endl;
}

int main(){
    func(5);
}