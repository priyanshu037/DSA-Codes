// scope of variable

#include <iostream>
using namespace std;

int sum(int num1, int num2){
    int ans = num1+num2;
    return ans;
}

int main(){ 

    int a=10;
    int b=38;

    cout<<sum(a,b)<<endl;


    // we can not use the variable ans here because it has only the scope of the sum function
    // cout<<ans<<endl; 

}