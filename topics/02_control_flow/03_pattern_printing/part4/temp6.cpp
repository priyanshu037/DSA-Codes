#include <iostream>
using namespace std;

// for n=5
/*


*/

int main(){

int n;
cin>>n;
for(int row=1; row<=n; row++){
    for(int col=1; col<=(n-row); col++){
        cout<<" ";
    }
    for(int col=1; col<=row; col++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int row=n; row>=1; row--){
    for(int col=1; col<=(n-row); col++){
        cout<<" ";
    }
    for(int col=1; col<=row; col++){
        cout<<"* ";
    }
    cout<<endl;
}
}