// check if a number is armstrong number or not


#include <iostream>
#include <math.h>

using namespace std;

int countDigit(int num){
    int count=0;
    while(num){
        num/=10;
        count++;
    }

    return count;
}


bool isArmstrong(int num, int digit){
    int n=num, rem, ans=0;

    while(n){
        rem=n%10;
        n/=10;
        ans = ans+pow(rem, digit);
    }

    if(ans==num){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int digit = countDigit(num);
    // cout<<digit<<endl;

    cout<<isArmstrong(num, digit)<<endl;
}