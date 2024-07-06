#include <iostream> 
using namespace std;

int main(){

// 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

int age;
cout<<"Enter the age: "<<endl;
cin>>age;

if(age>=13 && age<=19){
    cout<<"You are a teenager"<<endl;
}else{
    cout<<"You are not a teenager"<<endl;
}



}