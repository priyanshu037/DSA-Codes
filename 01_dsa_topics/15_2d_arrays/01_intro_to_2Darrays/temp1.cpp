#include <iostream>
using namespace std;


int main(){

    // create 2-D array
    int arr[3][4];
    
    // insert values in a 2-D array
    int arr2[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    // print values of 2-D array
    int arr3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr3[row][col]<<" ";
        }
    }
    

}