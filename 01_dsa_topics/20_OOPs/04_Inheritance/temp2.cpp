// Derived class

#include <iostream>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int weight;
};

class Student: public Human{
    int roll, fees;
};

int main(){

    Student A1;
    A1.name = "Rohit";

}