// print 2 to n (even numbers) using only one argument

#include <iostream>
using namespace std;

void func(int num){
    if(num==2){
        cout<<num<<endl;
        return;
    }
    func(num-2);
    cout<<num<<endl;
}

int main(){

    func(10);

}