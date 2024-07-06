// 3: Selection Sort Algorithm to sort the array of char in ascending order.


#include <iostream>
using namespace std;

int main(){
    int arr[] = {'a','b','e','g','i','m'};

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
        cout<<(char)(arr[i])<<" ";
    }
}