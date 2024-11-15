// print array ele in reverse order using recursion

#include <iostream>
using namespace std;

void func(int arr[], int index, int size){
    if(index==size){
        return;
    }
    func(arr, index+1, size);
    cout<<arr[index]<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    func(arr, 0, 5);
}