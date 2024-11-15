#include <iostream> 
using namespace std;

// Calculate the time and space complexity of each program

int power(int base, int exponent) {
   if (exponent == 0)
       return 1;
   return base * power(base, exponent - 1);
}



int main(){

}