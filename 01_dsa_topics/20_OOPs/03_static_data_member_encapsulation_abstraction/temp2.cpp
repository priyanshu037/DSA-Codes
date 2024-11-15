// static member function

#include <iostream>
using namespace std;

class Customer{
    string name;
    int acc_balance;
    int acc_number;
    static int total_customer;
    static int total_balance;
    public:

    Customer(string name, int acc_balance, int acc_number){
        this->name = name;
        this->acc_balance = acc_balance;
        this->acc_number = acc_number;
        total_customer++;
        total_balance+=acc_balance;
    }

    static void func(){
        cout<<"total number of customer"<<total_customer<<endl;
        cout<<"total number of balance"<<total_balance<<endl;
    }

    void deposit(int amount){
        if(amount>0){
            acc_balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount<=acc_balance && amount>0){
            acc_balance-=amount;
            total_balance-=amount;
        }
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main(){
    Customer A1("Priyanshu", 1000, 123);
    Customer A2("Aman", 1000, 124);

    // cout<<Customer::total_customer<<endl;

    Customer::func();

}