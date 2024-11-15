// print row index with maximum sum

#include <iostream>
using namespace std;

int printrowmax(int arr[][4], int row, int col){
    int sum = INT8_MIN;
    int index = -1;

    for(int i=0; i<3; i++){
        int total = 0;
        for(int j=0; j<4; j++){
            total += arr[i][j];
            if(total > sum){
                sum = total;
                index = i;
            }
        }
    }

    return index;
}

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<printrowmax(arr, 3, 4)<<endl;
}