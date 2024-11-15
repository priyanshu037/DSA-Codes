#include <iostream>
#include <cstring>
using namespace std;

int calculateLength(const char *str)
{
    int length = 0;

    // Calculate the length of string
    while (str[length] != '\0') {
        length++;
    }

    return length;

}

int main()
{
    const char *myString = "Hello, World!";
    cout << "Length of the string: " << calculateLength(myString) << endl;

}
