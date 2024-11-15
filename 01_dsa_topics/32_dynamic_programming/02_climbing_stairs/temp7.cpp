// another method
// space optimization approach

#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n){
    int curr=1, prev1 = 1, prev2 = 1;

    for(int i=2; i<=n; i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}

int main(){
    cout<<climbStairs(5)<<endl;
    return 0;
}