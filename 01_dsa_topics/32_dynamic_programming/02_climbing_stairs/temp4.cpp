// space optimization
// link: https://leetcode.com/problems/climbing-stairs/submissions/1372919783/

#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n){
    vector<int>dp(n+2, -1);
    int curr, next1 = 1, next2 = 0;

    for(int i=n-1; i>=0; i--){
        curr = next1 + next2;
        next2 = next1;
        next1 = curr;
    }

    return curr;
}   

int main(){
    cout<<climbStairs(5)<<endl;
}