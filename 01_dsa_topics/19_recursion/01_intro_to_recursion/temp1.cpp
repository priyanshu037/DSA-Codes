// infinite recursion call

#include <iostream>
using namespace std;

void func(){
    cout<<"recursive function"<<endl;
    func();
}

int main(){

    func();

}