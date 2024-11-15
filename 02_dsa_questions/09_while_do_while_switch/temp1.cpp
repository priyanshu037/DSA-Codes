#include <iostream>
using namespace std;

int main(){
    
// 1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1;

    // using while loop
    while(i<=n){
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }

    // using do while loop
    i=1;
    do{
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }while(i<=n);

}