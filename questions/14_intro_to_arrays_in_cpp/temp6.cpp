// 6: Find the third smallest element in an array of unique elements size n. Where n>3.


#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int arr[5] = {3,5,2,6,1};

    long long int ans = INT64_MAX;

    for(int i=0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }

    cout<<ans<<" ";

    int second = INT8_MAX;

    for(int i=0; i<5; i++){
        if(ans!=arr[i]){
            second = min(second, arr[i]);
        }
    }

    cout<<second<<" ";

    int third = INT8_MAX;

    for(int i=0; i<5; i++){
        if(second!=arr[i] && ans!=arr[i]){
            third = min(third, arr[i]);
        }
    }

    cout<<third<<" ";

}