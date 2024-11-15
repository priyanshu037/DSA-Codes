// Linear Search
// link: https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int x){

    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){

    int x = 5;
    int n = 5;
    int arr[] = {1,2,3,4,5};

    cout<<linear_search(arr,n,x)<<endl;

}