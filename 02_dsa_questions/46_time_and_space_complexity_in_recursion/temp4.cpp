#include <iostream>
using namespace std;

// Calculate the time and space complexity of each program

void reverseString(string& str, int start, int end) {
   if (start < end) {
       swap(str[start], str[end]);
       reverseString(str, start + 1, end - 1);
   }
}



int main(){

}