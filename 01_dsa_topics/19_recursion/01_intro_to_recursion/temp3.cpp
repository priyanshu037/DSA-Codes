// print from n to 1 using recursion

#include <iostream>
using namespace std;

void func(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    func(n-1);
}

int main(){
    func(5);
}