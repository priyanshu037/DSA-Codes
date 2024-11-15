// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,5,2,8,5,9};

    int ans = INT8_MIN;

    for(int i=0; i<6; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    cout<<ans<<" ";
    
    int sec = INT8_MIN;
    for(int i=0; i<6; i++){
        if(ans!=arr[i]){
            sec = max(sec, arr[i]);
        }
    }

    cout<<sec<<" "; 
}