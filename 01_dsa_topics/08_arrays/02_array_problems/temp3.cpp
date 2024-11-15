// second max
// link: https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#include <iostream>
using namespace std;

int print2largest(int arr[], int n) {
	int ans = -1;
	for(int i=0; i<n; i++){
	    if(arr[i]>ans){
	        ans = arr[i];
	    }
	}
	    
	int second = -1;
	for(int i=0; i<n; i++){
        if(ans!=arr[i]){
            second = max(second, arr[i]);
        }
    }
    
    return second;
}


int main(){

	int arr[] = {6,3,7,2,8,9};

	cout<<print2largest(arr, 6)<<endl;

}