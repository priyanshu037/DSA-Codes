// rotate matrix by 90 degree
// second approach -> space complexity: O(1)

#include <iostream>
#include <vector>

using namespace std;

void rotate_matrix(int arr[][4], int n){
    vector<vector<int> >matrix(4, vector<int>(4,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matrix[j][n-1-i] = arr[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<matrix[i][j]<<" ";
        }
    }
}

int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    rotate_matrix(arr, 4);


}