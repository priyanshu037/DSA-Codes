// print array elem in reverse using recursion (index is at end)

#include <iostream>
using namespace std;

void func(int arr[], int index){
    if(index==0){
        cout<<arr[index]<<endl;
        return;
    }
    cout<<arr[index]<<endl;
    func(arr, index-1);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    func(arr, 4);
}