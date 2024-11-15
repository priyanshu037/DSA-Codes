// find sum of elements of an array using recursion

#include <iostream>
using namespace std;

int func(int arr[], int index, int n){
    if(index==n){
        return 0;
    }

    return arr[index] + func(arr, index+1, n);
}

int main(){

    int arr[5] = {1,2,3,4,5};
    cout<<func(arr, 0, 5);

}