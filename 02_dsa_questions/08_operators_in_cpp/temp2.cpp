#include <iostream> 
using namespace std;

int main(){

// 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

int num;
cout<<"Enter the number: "<<endl;
cin>>num;

if(num%2==0 && num>0){
    cout<<"Yes"<<endl;
}else{
    cout<<"No"<<endl;
}

}