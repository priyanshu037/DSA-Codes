// 2: Calculate the average of elements in an array of size 18.

#include <iostream>
using namespace std;

int main(){


    int arr[18];
    for(int i=0; i<18; i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0; i<18; i++){
        sum = sum+arr[i];
    }
    cout<<sum/(sizeof(arr)/sizeof(arr[0]));


}