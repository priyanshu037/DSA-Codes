#include <iostream>
using namespace std;

// comparision operator: {==, >, <, >=, <=, !=}
// if true -> 1
// if false -> 0
// {<, >, >=, <=} > {==, !=} 
// associativity: left to right

int main(){
    cout<<(3==4)<<endl; // 0

    cout<<(10>20)<<endl; // 0

    int a = 10;
    int b = 15;
    if(a>b){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }

    cout<<(5>4>3)<<endl; // left to right evaluation so answer is no

    cout<<(8>=4)<<endl; // 1

    cout<<(10<=8)<<endl; // 0

    cout<<(4!=5)<<endl; // 1
    cout<<(5!=5)<<endl; // 0
}