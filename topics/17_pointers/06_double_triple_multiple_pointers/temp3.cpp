#include <iostream>
using namespace std;

int main(){

    int num = 10;

    int *ptr1 = &num;

    int **ptr2 = &ptr1;

    **ptr2 = **ptr2 + 10;

    cout<<"value of num using ptr2 is: "<<**ptr2<<endl;

}