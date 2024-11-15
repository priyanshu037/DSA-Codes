// print 1 to n using recursion

#include <iostream>
using namespace std;

void func(int num, int n){
    if(num==n){
        cout<<n<<endl;
        return;
    }
    cout<<num<<endl;
    func(num+1, n);
}

int main(){

    func(1, 5);

}