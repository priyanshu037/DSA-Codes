// Transpose of a matrix
// link: https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>

using namespace std;

void transpose(int arr[][4], int row, int col){
    for(int i=0; i<row-1; i++){
        for(int j=i+1; j<col; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    transpose(arr,4,4);


    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}