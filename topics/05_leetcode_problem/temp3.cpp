// Reverse integer
// link: https://leetcode.com/problems/reverse-integer/description/

#include <iostream>
using namespace std;

int main(){
        int x;
        cout<<"Enter the number: "<<endl;
        cin>>x;
        int rem, ans=0;
        while(x){
            rem = x%10;
            x/=10;
            ans = ans*10 + rem;
        }
        cout<<ans<<endl;
    
}