// find minimum element from an array

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {2,5,1,6,8};

    long long int ans=INT64_MAX;

    for(int i=0; i<5; i++){
        if(arr[i]<ans){
            ans = arr[i];
        }
    }

    cout<<"Minimum value in arr is: "<<ans<<endl;

}