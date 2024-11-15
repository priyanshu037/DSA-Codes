// public, protected, private

#include <iostream>
using namespace std;

class Human{
    private:
    int a;

    protected:
    int b;

    public:
    int c;

    void func(){
        a = 10;
        b = 20;
        c = 30;
    }
};

int main(){

    Human Aman;
    // Aman.a = 10;
    // Aman.b = 20;
    Aman.c = 30;

    Aman.func();
}