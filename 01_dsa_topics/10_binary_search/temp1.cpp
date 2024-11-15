// link: https://leetcode.com/problems/binary-search

#include <iostream>
using namespace std;

// time complexity: O(logN)
// space complexity: O(1)

int BinarySearch(int arr[], int n, int key){

    int start=0, end=n-1, mid;

    while(start<=end){
        int mid = start+(start-end)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    return -1;
}

int main(){

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int arr[100];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the target: "<<endl;
    cin>>key;

    cout<<BinarySearch(arr, n, key)<<endl;

}