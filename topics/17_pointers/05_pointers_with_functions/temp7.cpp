#include <iostream>
using namespace std;

void mul_by_2(int arr[]){
    for(int i=0; i<5; i++){
        arr[i] = arr[i] * 2;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    mul_by_2(arr);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}