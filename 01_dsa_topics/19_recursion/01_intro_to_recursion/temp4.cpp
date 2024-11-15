// print n to 0 (only even numbers) using recursion

#include <iostream>
using namespace std;

void func(int n){
    if(n==0){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    func(n-2);
}

int main(){

    func(8);

}