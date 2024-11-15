// inline constructor

#include <iostream>
using namespace std;

class Customer{
    public:
    string name;
    int acc_balance;
    int acc_number;

    // inline constructor
    inline Customer(string a, int b, int c): name(a), acc_balance(b), acc_number(c){}


    void display(){
        cout<<"name is: "<<name<<" account balance is: "<<acc_balance<<" account number is: "<<acc_number<<endl;
    }
};

int main(){

    Customer A1("Priyanshu", 1000, 123);
    
    A1.display();
}