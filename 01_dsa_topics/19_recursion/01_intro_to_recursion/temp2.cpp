// recursive call with a base condition

#include <iostream>
using namespace std;

void func(int n){
    // base case
    if(n==0){
        cout<<"0"<<endl;
        return;
    }
    cout<<n<<endl;
    func(n-1);
}

int main(){

    func(3);

}