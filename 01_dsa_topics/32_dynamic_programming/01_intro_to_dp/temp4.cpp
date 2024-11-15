// space optimization
// link: https://leetcode.com/problems/fibonacci-number/

#include <iostream>
#include <vector>

using namespace std;


int fib(int n) {

    if(n<=1){
        return n;
    }
    int curr, prev1 = 1, prev2 = 0; 

    for(int i=2; i<=n; i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return curr;
}

int main(){
    cout<<fib(6);
    return 0;
}
