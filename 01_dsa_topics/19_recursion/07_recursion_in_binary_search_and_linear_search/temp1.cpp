// recursion in linear search

#include <iostream>
using namespace std;

bool linearSearch(int arr[], int index, int x, int n){
    if(index==n){
        return 0;
    }

    if(arr[index]==x){
        return 1;
    }

    return linearSearch(arr, index+1, x, n);
}

int main(){
    int arr[5] = {1, 6, 7, 3, 5};
    cout<<linearSearch(arr, 0,9, 5)<<endl;
}