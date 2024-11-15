// sqrt(x)
// link: https://leetcode.com/problems/sqrtx/description/

#include <iostream>
using namespace std;

int main(){

    int x;
    cout<<"Enter the N*N chessboard: "<<endl;
    cin>>x;

    int sq, ans=0;
    for(int i=x; i>=1; i--){
        sq=i*i;
        ans=ans+sq;
    }

    cout<<ans<<endl;
}