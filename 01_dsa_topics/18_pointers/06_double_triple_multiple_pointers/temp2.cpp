// triple pointer
// used to create 3d array

#include <iostream>
using namespace std;

int main(){

    int num = 20;

    int *ptr1 = &num;

    int **ptr2 = &ptr1;

    int ***ptr3 = &ptr2;

    cout<<"value of num using ptr3 : "<<***ptr3<<endl;

}