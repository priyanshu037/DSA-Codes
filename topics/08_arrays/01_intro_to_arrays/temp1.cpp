// it stores same type of datatypes.
// it stores at contigious location.
// byte addressable

#include <iostream>
using namespace std;

int main(){

    //  declaration of array

    int arr[10];

    // 5 ways to insert values in an array (declare + initialize).

    // 1. 

    int arr1[5] = {5,4,2,6,7};
    for(int i=0; i<5; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // 2.

    int arr2[] = {3,4,5,6,7};
    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    // 3.

    int arr3[10];

    for(int i=0; i<10; i++){
        cin>>arr3[i];
    }
    cout<<endl;

    // 4.

    int arr4[5] = {8,4};
    for(int i=0; i<5; i++){
        cout<<arr4[i]<<" ";
    }
    cout<<endl;

    // 5.

    int arr5[5] = {0};
    for(int i=0; i<5; i++){
        cout<<arr5[i]<<" ";
    }
    cout<<endl;



}