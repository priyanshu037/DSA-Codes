// delete keyword
// free memory from heap

#include <iostream>
using namespace std;

int main(){

    int *ptr1 = new int;
    int *ptr3 = new int[10];

    delete ptr1; // free variable memory from heap
    delete[] ptr3; // free array from heap memory

    // vector, queue... store in heap memory
    // vector, queue etc can automatically free memory from heap without using delete keyword

}