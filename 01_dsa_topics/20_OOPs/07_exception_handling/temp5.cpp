//  custom exception error

#include <iostream>
using namespace std;

class InvalidAmountError : public runtime_error{
    public:

    InvalidAmountError(const string &msg): runtime_error(msg){};
};

class InsufficientBalanceError: public runtime_error{
    public:

    InsufficientBalanceError(const string &msg): runtime_error(msg){};
};

class Customer{
    string name;
    int balance, account_number;

    public:

    Customer(string name,int balance,int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit
    void deposit(int amount){
        if(amount>0){
            balance+=amount;
            cout<<amount<<"Rs is credited successfully\n";
        }else{
            throw InvalidAmountError("Amount should be greater than 0");
        }
    }

    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<<"Rs is debited successfully";
        }else if(amount<0){
            throw InvalidAmountError("Amount should be greater than 0");
        }else{
            throw InsufficientBalanceError("Balance is low");
        }
    }

};

int main(){
    Customer C1("Priyanshu",5000,10);
    try{
    C1.deposit(100);
    C1.withdraw(60000);
    return 0;
    }catch(const InvalidAmountError &e){
        cout<<"Exception occurred: "<<e.what()<<endl;
    }catch(const InsufficientBalanceError &e){
        cout<<"Exception occurred: "<<e.what()<<endl;
    }catch(...){ // default
        cout<<"Exception occurred: "<<endl;
    }
}