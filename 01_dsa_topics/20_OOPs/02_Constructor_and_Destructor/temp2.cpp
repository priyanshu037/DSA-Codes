// initializing default value using constructor

#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_balance;
    int acc_number;

    Customer(){
        name = "Priyanshu";
        acc_balance = 1000;
        acc_number = 123;
    }

    void display(){
        cout<<"name is: "<<name<<" account balance is: "<<acc_balance<<" account number is: "<<acc_number<<endl;
    }
};

int main(){

    Customer A1, A2;
    A1.display();
    A2.display();

}