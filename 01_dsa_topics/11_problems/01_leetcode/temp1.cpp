// first and last position of an element in a sorted array
// link: 

// time complexity: O(n)

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,4,6,6,4};
    int n = 5;
    int target = 6;

    int start = 0, end = n-1, mid, first = -1, last = -1;

    while(start<=end){
        if(arr[mid] == target){
            first = mid;
            end = mid-1;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    cout<<"first occurrence of the given target is : "<<first<<endl;
    cout<<"last occurrence of the given target is : "<<last<<endl;
}