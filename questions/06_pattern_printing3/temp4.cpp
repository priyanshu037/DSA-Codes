#include <iostream>
using namespace std;

int main(){
// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

/*
             E
          E D
       E D C
   E D C B
E D C B A

*/

for(int row=1;row<=5;row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }
    for(int col=row; col>=1; col--){
        cout<<(char)('E' - col+1)<<" ";
    }
    cout<<endl;
}

}