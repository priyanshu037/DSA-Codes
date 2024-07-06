// swap function using pass by reference

#include <iostream>
using namespace std;

void Swap(int &p1, int &p2){
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

int main(){

    int first = 10;
    int second = 20;

    cout<<"value of first: "<<first<<" value of second: "<<second<<" before swapping"<<endl;
    Swap(first, second);

    cout<<"value of first: "<<first<<" value of second: "<<second<<" after swapping"<<endl;

}