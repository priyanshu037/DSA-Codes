#include <iostream>
using namespace std;

int main(){

    // array size must be a constant not a variable
    int size;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}