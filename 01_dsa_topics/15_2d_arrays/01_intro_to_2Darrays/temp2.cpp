// pass 2d array in function

#include <iostream>
using namespace std;

void print_2darray(int arr[][4], int row, int col){
    for(int j=0; j<col; j++){
        for(int i=0; i<row; i++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){

    // print all the values of array by function call
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    print_2darray(arr, 3, 4);
}