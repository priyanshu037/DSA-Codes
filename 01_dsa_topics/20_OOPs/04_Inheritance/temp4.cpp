// Derived class

#include <iostream>
using namespace std;

class Human{
    private:
    string religion, color;

    public:
    string name;
    int age;
    int weight;
};

class Student: private Human{
    int roll, fees;

    public:

    Student(string name, int age, int weight, int roll, int fees){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll = roll;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll<<" "<<fees<<endl;
    }
};

class Teacher: public Human{
    int salary, id;
};

int main(){

    Student A("Priyanshu", 12, 400, 23, 455);

    A.display();

    Teacher B;
    B.name = "Aman";
}