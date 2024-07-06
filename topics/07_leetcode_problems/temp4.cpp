// Trailing zero in a factorial
// link: https://www.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

#include <iostream>
using namespace std;

    int trailingZeroes(int N)
    {
        // Write Your Code here
        
        int count = 0;
        
        while(N>=5){
            count += N/5;
            N/=5;
        }
        
        return count;
    }

int main(){
    
}