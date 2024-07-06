#include <iostream>
using namespace std;

void printHello(int n){
    for(int i=0; i<n; i++){
        cout<<"Hello World"<<endl;
    }
}

int main(){
// 5: Print “Hello Coder Army” n times using Function.

    int n;
    cout<<"enter how many time you want to print hello world: "<<endl;
    cin>>n;
    printHello(n);
}