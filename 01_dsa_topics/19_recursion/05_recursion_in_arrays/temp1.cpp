// print array ele using recursion

#include <iostream>
using namespace std;

void func(int arr[], int index, int size){
    if(index==size){
        return;
    }
    cout<<arr[index]<<endl;
    func(arr, index+1, size);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    func(arr, 0, 5);
}