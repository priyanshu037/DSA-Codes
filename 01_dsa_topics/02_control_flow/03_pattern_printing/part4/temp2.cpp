#include <iostream>
using namespace std;
/*
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/

int main(){

    for(int row=1; row<=5; row++){
        for(int col=1; col<=(5-row); col++){
            cout<<"  ";
        }
        for(int col=1; col<=row; col++){
            cout<<col<<" ";
        }
        for(int col=row-1; col>=1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}