#include <iostream>
using namespace std;

int main()
{
    // check palindrome

    string s3 = "naman";
    int start = 0;
    int end = s3.size() - 1;

    while (start < end)
    {
        if (s3[start] != s3[end])
        {
            cout << "not a palindrome" << endl;
            return 0;
        }
        start++;
        end--;
    }

    cout << "it is a palindrome" << endl;
}