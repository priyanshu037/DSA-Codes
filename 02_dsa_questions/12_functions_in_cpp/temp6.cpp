#include <iostream>
using namespace std;

long long int fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}   

long long int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.
    
    int n=5,r=2;

    cout<<nCr(n,r)<<endl;
}