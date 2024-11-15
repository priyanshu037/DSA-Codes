// static data member

#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_balance;
    int acc_number;
    static int total_customer;

    Customer(string name, int acc_balance, int acc_number){
        this->name = name;
        this->acc_balance = acc_balance;
        this->acc_number = acc_number;
        total_customer++;
    }
};

int Customer::total_customer = 0;

int main(){
    Customer A1("Priyanshu", 1000, 123);
    Customer A2("Aman", 1000, 124);

    cout<<Customer::total_customer<<endl;
}