// passing array into a function

#include <iostream>
using namespace std;

void func(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[5] = {1,5,2,7,4};

    func(arr, 5);
}