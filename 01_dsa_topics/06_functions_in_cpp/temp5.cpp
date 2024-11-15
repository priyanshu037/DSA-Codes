// default parameter

#include <iostream>
using namespace std;

int square(int a=80){
    int ans = a*a;
    return ans;
}

int main(){
    cout<<square()<<endl;
    cout<<square(20)<<endl;
}