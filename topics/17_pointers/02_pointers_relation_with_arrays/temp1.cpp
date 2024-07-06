// pointers pointing to array elements

#include <iostream>
using namespace std;

int main(){

    int arr[] = {5,2,5,1,6};
    int *ptr = &arr[0]; // ptr store address of first array element
    int *ptr2 = &arr[1]; // ptr store address of second array element

    // print addresses
    cout<<"address of 1st array element is : "<<ptr<<endl;
    cout<<"address of 2nd array element is : "<<ptr2<<endl;
    
    // print values
    cout<<"value of 1st array element is : "<<*ptr<<endl; // 5
    cout<<"value of 2nd array element is : "<<*ptr2<<endl; // 2

}