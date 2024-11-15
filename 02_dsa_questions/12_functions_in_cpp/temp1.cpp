#include <iostream>
using namespace std;

int findCube(int n){
    return n*n*n;
}

int main(){

// 1: Find the cube of a number using Function. 

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<findCube(n)<<endl;

}