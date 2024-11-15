// Reverse array

#include <iostream>
using namespace std;

int main(){

    // int arr[6] = {5, 3, 7, 8, 0, 2};
    // int temp[6];

    // int i = 5; 
    // int j = 0; 
    // while (i >= 0) {
    //     temp[j] = arr[i];
    //     i--;
    //     j++;
    // }


    // for (int i = 0; i < 6; i++) {
    //     arr[i] = temp[i];
    // }


    // cout << "After reversing the array" << endl;
    // for (int i = 0; i < 6; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;


    // another method

    int arr[5] = {1,2,4,7,5};

    int start=0, end=4;
    while( start<end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }

}