#include <iostream>
using namespace std;

int main(){
// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*
        5 
      5 4 
    5 4 3 
  5 4 3 2 
5 4 3 2 1
*/

for(int row=1; row<=5; row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }
    for(int col=5; col>=(5-row+1); col--){
        cout<<col<<" ";
    }
    cout<<endl;
}


}