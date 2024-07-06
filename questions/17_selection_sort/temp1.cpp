// 1: Selection Sort Algorithm to sort the array of integers in decreasing order.

#include <iostream> 
using namespace std;

int main(){
    int arr[] = {6,3,8,2,5,1};
    int index = 0;

    for(int i=0; i<=5; i++){
        if(arr[i]<arr[index]){
            index = i;
        }
            swap(arr[index], arr[i]);
    }        


    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}