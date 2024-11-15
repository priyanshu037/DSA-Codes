/*

3 Programming Challenges with Classes:

1. Bank Customer Class:

Challenge: Design a Customer class for a bank system that manages customer information and basic operations.

Attributes:

name: String containing the customer's full name.

accountNumber: Unique integer identifying the customer's account.

accountBalance: Double representing the current balance in the account.

isActive: Boolean indicating whether the account is active.

Methods:

deposit(amount): Adds the specified amount to the account balance.

withdraw(amount): Deducts the specified amount from the account balance (check for sufficient funds).

transfer(amount, targetAccount): Transfers the specified amount to another customer's account (within the system).

printDetails(): Prints the customer's name, account number, and current balance.

*/

#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int accNumber;
    int accBalance;
    bool isActive;

    void deposit(int n){
        accBalance = n;
        cout<<"balance of "<<n<<" is deposited in you acc"<<endl;
    }

    void withdraw(int n){
        accBalance = accBalance - n;
        cout<<"balance of "<<n<<" is withdrawn from your acc"<<endl;
    }

    void printDetails(){
        cout<<"Customer's name is: "<<name<<endl;
        cout<<"Customer's accBalance is: "<<accBalance<<endl;
        cout<<"Customer's accNumber is: "<<accNumber<<endl;
        if(isActive){
            cout<<"acc is active"<<endl;
        }else{
            cout<<"acc is not active"<<endl;
        }
    }
};

int main(){
    Customer c1;
    c1.name = "Priyanshu";
    c1.accBalance = 923902;
    c1.accNumber = 123;
    c1.isActive = true;
    
    c1.printDetails();
}