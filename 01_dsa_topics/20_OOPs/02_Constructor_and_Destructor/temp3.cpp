#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_number;
    int acc_balance;

    // we can create multiple constructors

    // default constructor
    Customer(){
        name = "Priyanshu";
        acc_balance = 1000;
        acc_number = 123;
    }

    // parameterized constructor
    Customer(string a, int b, int c){
        name = a;
        acc_balance = b;
        acc_number = c;
    }

    void display(){
        cout<<"name is: "<<name<<" account balance is: "<<acc_balance<<" account number is: "<<acc_number<<endl;
    }
};

int main(){

    Customer A1;
    Customer A2("Rohit", 1000, 145);

    A1.display();
    A2.display();

    

}