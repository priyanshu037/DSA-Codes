
#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int start, int mid, int end){
    vector<int>temp(end-start+1);
    int left = start, right = mid+1, index=0;
    while(left<=mid && right<=end){
        if(arr[left]<=arr[right]){
            temp[index] = arr[left];
            index++, left++;
        }else{
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // if elements in left array are left
    while(left<=mid){
        temp[index] = arr[left];
        index++, left++;
    }

    // if elements in right array are left
    while(right<=end){
        temp[index] = arr[right];
        index++, right++;
    }

    // copy sorted array in original array
    index=0;
    while(start<=end){
        arr[start] = temp[index];
        start++, index++;
    }
}

void mergesort(int arr[], int start, int end){
    if(start==end){
        return;
    }
    int mid = start+(end-start)/2;
    mergesort(arr, start, mid); // left
    mergesort(arr, mid+1, end); // right

    merge(arr, start, mid, end);
}

int main(){
    int arr[] = {4,6,9,1,2,6,7,3};
    mergesort(arr, 0, 7);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}