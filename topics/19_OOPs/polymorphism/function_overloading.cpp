#include <iostream>

using namespace std;


class Area{
    public:
    int calculateArea(int r){ // circle
        return 3.14*r*r;
    }

    int calculateArea(int l, int b){ // rectangle
        return l*b;
    }
};

int main(){
    Area A1,A2;
    cout<<A1.calculateArea(12)<<endl;
    cout<<A2.calculateArea(5,6)<<endl;

    return 0;
}