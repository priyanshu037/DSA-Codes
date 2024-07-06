#include <iostream>
using namespace std;

int Reverse(int n){
    int rem, ans = 0;

    while(n){
        rem = n%10;
        n/=10;
        ans = ans*10 + rem;
    }
    return ans;
}

int main(){
// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    cout<<Reverse(n)<<endl;
}