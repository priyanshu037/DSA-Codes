// selection sort in increasing order

/*
sorting:

1. ascending (increasing) : (1,2,3,5,8)
2. descending (decreasing) : (8,5,3,2,1)


time complexity: O(1)
space complexity: O(n^2)
*/

#include <iostream>
using namespace std;

int main(){
    int arr[] = {6,3,8,2,5,1};


    int n = 6;
    for(int i=0; i<n-1; i++){

    int index = i;    

    for(int j=i+1; j<n; j++){
        if(arr[j]<arr[index]){
            index = j;
        }
    }
    swap(arr[index], arr[i]);

    }


    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

}