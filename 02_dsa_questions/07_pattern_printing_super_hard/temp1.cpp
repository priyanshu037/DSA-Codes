#include <iostream>
using namespace std;

// First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
 */

int main()
{

  for (int row = 1; row <= 5; row++)
  {
    for (int col = 1; col <= (5 - row); col++)
    {
      cout << "  ";
    }
    for (int col = 1; col <= (2 * row - 1); col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}