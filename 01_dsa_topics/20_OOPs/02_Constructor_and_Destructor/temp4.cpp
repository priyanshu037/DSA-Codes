// Constructor overloading

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

    Customer(string a, int b, int c){
        name = a;
        acc_balance = b;
        acc_number = c;
    }

    Customer(string a, int b){
        name = a;
        acc_balance = b;
    }

    void display(){
        cout<<"name is: "<<name<<" account balance is: "<<acc_balance<<" account number is: "<<acc_number<<endl;
    }
};

int main(){

    Customer A1;

    Customer A2("Aman", 1000, 145);

    Customer A3("Rohit", 1000);

    A1.display();
    A2.display();
    A3.display();


}