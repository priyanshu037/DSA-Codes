#include <iostream>
using namespace std;

int main(){

/*

        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5 

*/

for(int row=1; row<=5; row++){
    for(int col=1; col<=(5-row); col++){
        cout<<"  ";
    }
    for(int col=1; col<=row; col++){
        cout<<col<<" ";
    }
    cout<<endl;
}

}