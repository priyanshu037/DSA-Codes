#include <iostream>
using namespace std;

// Calculate the time and space complexity of each program

bool isEven(int n) {
   if (n == 0)
       return true;
   return !isEven(n - 1);
}



int main(){

}