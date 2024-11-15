// find min element of an array using recursion

#include <iostream>
using namespace std;

int minEle(int arr[], int index, int n){
    if(index==n-1){
        return arr[index];
    }

    return min(arr[index], minEle(arr, index+1, n));
}

int main(){
    int arr[] = {3,4,1,2,8};

    cout<<minEle(arr,0, 5);
}