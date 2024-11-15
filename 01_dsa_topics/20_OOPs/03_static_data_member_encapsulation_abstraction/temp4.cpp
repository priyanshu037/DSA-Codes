// Abstraction

#include <iostream>
using namespace std;

class Customer{
    string name;
    int balance;

    public:
    Customer(string a, int b){
        name = a;
        balance = b;
    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }else{
            cout<<"Invalid amount"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<balance<<endl;
    }
};

int main(){

    Customer A1("priyanshu", 10000);
    A1.display();
    A1.deposit(1000);
    A1.display();
}