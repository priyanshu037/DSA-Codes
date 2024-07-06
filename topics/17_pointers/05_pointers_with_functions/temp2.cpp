#include <iostream>
using namespace std;

void multiply_by_2(int *ptr){
    for(int i=0; i<6; i++){
        ptr[i] = 2*ptr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};

    multiply_by_2(arr);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}