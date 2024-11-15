// link: https://practice.geeksforgeeks.org/problems/bubble-sort/1


#include <iostream>
using namespace std;

int main(){
    
    
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[100];
    cout<<"Enter all the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    // for(int i=0; i<n-1; i++){
    //     for(int j=0; j<n-1; j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j], arr[j+1]);
    //         }
    //     }
    // }

    for(int i=n-2; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swapped=1;
                swap(arr[j], arr[j+1]);
            }
        }

        if(swapped==0){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
