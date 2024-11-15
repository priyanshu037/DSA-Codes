// power of two
// link: https://leetcode.com/problems/power-of-two/description/

#include <iostream>
using namespace std;


bool powerof2(int x){
    if(x<1){
        return 0;
    }

    while(x!=1){
        if(x%2==1){
            return 0;
        }
        x/=2;
    }

    return 1;
}

int main(){

    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;

    if(powerof2(x)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}