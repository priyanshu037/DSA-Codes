
// Palindrome number
// link: https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
using namespace std;

bool isPalindrome(int x){
    if(x<0){
        return 0;
    }
    int rem, ans = 0, num=x;
    while(num){
        rem = num%10;
        num/=10;
        ans = ans*10 + rem;
    }

    if(x==ans){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int x;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;

    if(isPalindrome(x)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a Palindrome"<<endl;
    }

    
}