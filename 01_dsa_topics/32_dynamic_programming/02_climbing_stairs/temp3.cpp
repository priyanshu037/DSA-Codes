// bottom up approach
// link: https://leetcode.com/problems/climbing-stairs/submissions/1372919783/

#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n){
    vector<int>dp(n+2, -1);

    dp[n] = 1;
    dp[n+1] = 0;
    for(int i=n-1; i>=0; i--){
        dp[i] = dp[i+1] + dp[i+2];
    }

    return dp[0];
}   

int main(){
    cout<<climbStairs(5)<<endl;
}