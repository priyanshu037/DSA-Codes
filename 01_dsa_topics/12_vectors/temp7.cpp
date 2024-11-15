#include <iostream>
#include <vector>

using namespace std;

int main(){

    // searching - binary search

    vector<int>v = {2,5,7,9,8};

    cout<<binary_search(v.begin(), v.end(), 7)<<endl; // 1
    cout<<binary_search(v.begin(), v.end(), 10)<<endl; // 0

    // find index of any value

    cout<<find(v.begin(), v.end(), 7)-v.begin()<<endl;
    
}   
