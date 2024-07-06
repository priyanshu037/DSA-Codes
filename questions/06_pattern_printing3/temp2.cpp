#include <iostream>
using namespace std;

int main(){
// Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
/*  
        A 
      B B 
    C C C 
  D D D D 
E E E E E 
*/  


for(int row=1;row<=5;row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }
    for(int col=row; col>=1; col--){
        cout<<(char)('A'+row-1)<<" ";
    }
    cout<<endl;
}
}