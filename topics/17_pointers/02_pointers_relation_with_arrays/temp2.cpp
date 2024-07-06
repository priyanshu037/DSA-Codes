// printing address from arr

#include <iostream>
using namespace std;

int main(){

    
    int arr[] = {6,3,7,3,7};

    // ith_index_address = base_address + i * data_type_size

    // arr = arr+0 = &arr[i]

    // address of first element or 0 index

    cout<<"address of 1st array element is : "<<arr<<endl; // arr stores the address of 1st array element
    cout<<"address of 1st array element is : "<<arr+0<<endl; // arr stores the address of 1st array element
    cout<<"address of 1st array element is : "<<&arr[0]<<endl; // arr stores the address of 1st array element

    // address of second element or 1st index
    cout<<"address of 2nd array element is : "<<arr+1<<endl; // arr stores the address of 2nd array element
    cout<<"address of 2nd array element is : "<<&arr[1]<<endl; // arr stores the address of 2nd array element

    // address of third element or 2nd index
    cout<<"address of 3rd array element is : "<<arr+2<<endl; // arr stores the address of 3rd array element
    cout<<"address of 3rd array element is : "<<&arr[2]<<endl; // arr stores the address of 3rd array element
    
    // print values in different ways

    // arr[i] = *(arr + i)
    // arr[i] = *(i + arr)
    // i[arr] = arr[i]
    
    // print values of 0 index
    cout<<"address of 1st array element is : "<<arr[0]<<endl; // value is 6
    cout<<"address of 1st array element is : "<<*(arr+0)<<endl; // value is 6
    cout<<"address of 1st array element is : "<<*arr<<endl; // value is 6
    cout<<"address of 1st array element is : "<<0[arr]<<endl; // value is 6

    // print values of 1st index
    cout<<"address of 2nd array element is : "<<arr[1]<<endl; // value is 3
    cout<<"address of 2nd array element is : "<<*(arr+1)<<endl; // value is 3
    cout<<"address of 2nd array element is : "<<1[arr]<<endl; // value is 3


    // how arr == &arr[0]

    // arr = &arr[0]
    // arr = &*(arr+0)
    // arr = &*(arr)
    // arr = arr



}