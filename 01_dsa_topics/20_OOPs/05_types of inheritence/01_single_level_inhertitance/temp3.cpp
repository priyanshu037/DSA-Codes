// first parent class constructor will be called then child class constructor will be called

#include <iostream>
using namespace std;

class Human{
    protected:

    string name;
    int age;
    
    public:
    Human(){
        cout<<"Parent class"<<endl;
    }
};

class Student: public Human{
    int roll, fees;
    public:
    Student(){
        cout<<"Child class"<<endl;
    }
};

int main(){

    Student A1;

}