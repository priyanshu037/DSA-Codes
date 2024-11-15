// Derived class

#include <iostream>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int weight;
};

class Student: protected Human{
    int roll, fees;

    public:

    void fun(string n, int a, int w){
        name = n;
        age = a;
        weight = w;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};

int main(){

    Student A;

    A.fun("Priyanshu", 17, 50);
    
    A.display();
}