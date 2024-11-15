// Write a function to check if a C-style string is a palindrome.

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str)
{
    int first = 0;
    int last = strlen(str) - 1;
    
    while (first < last)
    {
        if (str[first] != str[last])
        {
            return 0;
        }
        first++;
        last--;
    }
    
    return 1;
}

int main()
{
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";

    if(isPalindrome(palindrome1)){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }

}
