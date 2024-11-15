// find maximum element from an array

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {2,5,1,6,8};

    int ans = INT8_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }

    cout<<"Maximum value in arr is: "<<ans<<endl;

}