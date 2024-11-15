// create 2D array using 2 pointer

#include <iostream>
using namespace std;

int main(){

    // creating a 2D array

    // steps:
    // 1. create a 1D array to store addresses.
    // 2. each address will point to an array.
    // 3. create a 2 pointer pointing to the 0th address of 1D array

    // creation

    int n; // row
    cout<<"enter the number of rows: "<<endl;
    cin>>n;

    int m; // col
    cout<<"enter the number of cols: "<<endl;
    cin>>m;

    int **ptr = new int *[n];

    for(int i=0; i<n; i++){
        ptr[i] = new int[m];
    }

    // assign values

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ptr[i][j];
        }
    }

    // print

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }

    // free memory

    for(int i=0; i<n; i++){
        delete[] ptr[i];
    }

    delete[] ptr; 


}