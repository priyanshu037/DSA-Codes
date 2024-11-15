/*
4: Given an array in c++

int arr[5] = {1,2,3,4,5};

What is the difference between arr and &arr. Try to explore it on your own.

*/

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    // cout<<arr<endl;
    cout<<arr+0<<endl;

    // cout<<&arr<endl;
    // cout<<&(arr+0)<endl;
}