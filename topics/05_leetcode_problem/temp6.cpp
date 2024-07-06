// compliment of base 10 int
// link: https://leetcode.com/problems/complement-of-base-10-integer/description/

#include <iostream>
using namespace std;

int bitwiseComplement(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int rem, ans = 0, mul = 1;
    while (n)
    {
        rem = n % 2;
        rem = rem ^ 1;
        n /= 2;
        ans = ans + rem * mul;
        mul = mul * 2;
    }
    return ans;
}


int main()
{


    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;

    cout<<bitwiseComplement(x)<<endl;
}