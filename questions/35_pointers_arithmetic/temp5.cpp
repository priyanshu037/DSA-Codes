/*
5: int arr[5] = {1,2,3,4,5};
    Create a pointer which will store the address of the last element. Then print all the elements from the last index to 0th index with the help of a pointer.

*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = &arr[4];

    for(int i=0; i<5; i++){
        cout<<*ptr<<" ";
        ptr--;
    }

}