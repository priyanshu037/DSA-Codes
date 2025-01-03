// top down approach
// link: https://leetcode.com/problems/climbing-stairs/submissions/1372919783/

#include <iostream>
#include <vector>

using namespace std;

int count(int i, int n, vector<int>&dp){
    if(i==n){
        return 1;
    }
    if(i>n){
        return 0;
    }

    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i] = count(i+1, n, dp) + count(i+2, n, dp);

}

int climbStairs(int n){
    vector<int>dp(n+2, -1);
    return count(0,n, dp);
}   

int main(){
    cout<<climbStairs(5)<<endl;
}