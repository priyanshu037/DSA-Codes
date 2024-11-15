// only recursion
// link: https://leetcode.com/problems/climbing-stairs/submissions/1372919783/

#include <iostream>
using namespace std;

int count(int i, int n){
    if(i==n){
        return 1;
    }
    if(i>n){
        return 0;
    }

    return count(i+1, n) + count(i+2, n);

}

int climbStairs(int n){
    return count(0,n);
}   

int main(){
    cout<<climbStairs(5)<<endl;
    return 0;
}