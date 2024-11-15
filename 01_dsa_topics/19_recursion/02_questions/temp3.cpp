// print 2 to n (even numbers)

#include <iostream>
using namespace std;

void func(int num, int n){
    if(num>n){
        return;
    }
    cout<<num<<endl;
    func(num+2, n);
}

int main(){

    func(2, 9);

}