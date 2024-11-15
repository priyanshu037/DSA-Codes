#include <iostream> 
using namespace std;

int main(){

// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

int a,b,c;
cout<<"Enter the numbers: "<<endl;
cin>>a>>b>>c;

if(a > b || a > c){
    cout<<"a is either greater than b or a is greater than c"<<endl;
}else{
    cout<<"a is not greater than b nor c"<<endl;
}

}