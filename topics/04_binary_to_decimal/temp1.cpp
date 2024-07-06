#include <iostream>
using namespace std;

int main(){

    // decimal to binary conversion
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    int rem, ans=0, mul=1;

    while(num>0){
        rem = num%2;
        num = num/2;
        ans = rem*mul + ans;
        mul = mul*10;
    }
    cout<<ans<<endl;


    // while(num>0){
    //     rem = num%2;
    //     num/=2;
    //     ans += rem*mul;
    //     mul*=10;
    // }
    // cout<<ans<<endl;


    while(num>0){
        rem = num&1;
        num= num>>1;
        ans += rem*mul;
        mul*=10;
    }
    cout<<ans<<endl;
}