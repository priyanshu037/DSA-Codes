// print sum of diagonal elements (row == col)

#include <iostream>
using namespace std;

int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int col = 4;
    int row = 4;

    int first = 0;

    for(int i=0; i<row; i++){
        first += arr[i][i];
    }

    cout<<"sum of all the elements of first diagonal is: "<<first<<endl;

    int second = 0;
    int i=0;
    int j=col-1;
    while(j>=0){
        second += arr[i][j];
        i++, j--;
    }

    cout<<"sum of all the elements of second diagonal is: "<<second<<endl;
}