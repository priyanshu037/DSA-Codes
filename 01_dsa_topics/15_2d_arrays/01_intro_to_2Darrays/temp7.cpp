// reverse each row of matrix

#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = {2,3,4,5,1,2,6,8,4,9,3,2};
    int row = 3, col = 4;

    cout<<"before reverse"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        int start = 0, end = col-1;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    cout<<"after reverse"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            cout<<arr[i][j]<<" ";
        }
    }


}