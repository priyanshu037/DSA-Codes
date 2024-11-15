#include <iostream>
using namespace std;

// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
/*
        A 
      A B A 
    A B C B A 
  A B C D C B A 
A B C D E D C B A 
*/

int main(){
        for(int row=1; row<=5; row++){
        for(int col=1; col<=(5-row); col++){
            cout<<"  ";
        }

        for(int col=1; col<=row; col++){
            cout<<(char)('A'+col-1)<<" ";
        }

        for(int col=row-1; col>=1; col--){
            cout<<(char)('A'+col-1)<<" ";
        }

        cout<<endl;
    }
}