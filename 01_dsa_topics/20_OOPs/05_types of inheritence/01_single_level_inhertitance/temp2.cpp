#include <iostream>
using namespace std;

class Human{
    protected:

    string name;
    int age;
    
    public:
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student: public Human{
    int roll, fees;
    public:
    Student(string name, int age, int roll, int fees): Human(name, age){
        this->roll = roll;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll<<" "<<fees<<endl;
    }
};

int main(){

    Student A1("Priyanshu", 17, 21, 2000);
    A1.display();
}