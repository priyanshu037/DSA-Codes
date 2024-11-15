// While loop

#include <iostream>
using namespace std;

int main(){

    // print 1 to 10

    int count = 1;
    while(count<=10){
        cout<<count<<endl;
        count++;
    }

    // print table of 8

    int num = 8;
    int i = 1;
    while(i<=10){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }

    // print factors of any number

    i = 1;
    int n = 10;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
}