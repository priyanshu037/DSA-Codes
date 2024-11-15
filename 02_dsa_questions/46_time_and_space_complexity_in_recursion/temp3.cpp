#include <iostream>
using namespace std;

// Calculate the time and space complexity of each program

bool isPalindrome(string str, int start, int end) {
   if (start >= end)
       return true;
   return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
}


int main(){

}