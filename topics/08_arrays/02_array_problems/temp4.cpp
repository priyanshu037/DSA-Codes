// missing number
// link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
#include <vector>

using namespace std;

int missingNumber(int arr[], int n) {
            
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum+=arr[i];
    }
        
    int ans = n*(n+1)/2;
        
    return ans-sum;
}

int main(){

    int arr[] = {1,3,4,5,6};

    cout<<missingNumber(arr, 6)<<endl;

}