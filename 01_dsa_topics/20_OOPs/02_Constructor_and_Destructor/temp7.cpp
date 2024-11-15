#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_balance;
    int acc_number;

    Customer(){

    }

    Customer(string name, int acc_balance, int acc_number){
        this->name = name;
        this->acc_balance = acc_balance;
        this->acc_number = acc_number;
    }

    // copy constructor
    Customer(Customer &B){
        name = B.name;
        acc_balance = B.acc_balance;
        acc_number = B.acc_number;
    }

    void display(){
        cout<<"name is: "<<name<<" account balance is: "<<acc_balance<<" account number is: "<<acc_number<<endl;
    }
};

int main(){
    Customer A1("Priyanshu", 1000, 123);
    Customer A2(A1);

    Customer A3("Aman", 1000, 145);
    Customer A4;
    A4 = A3;

    A1.display();
    A2.display();
    A3.display();
    A4.display();
}