// Defanging an IP Address
// link: https://leetcode.com/problems/defanging-an-ip-address/
// T.C -> O(N)
// S.C -> O(N)


#include <iostream>
using namespace std;

int main(){

    string address = "1.1.1.1.1";

    int index = 0;
    string ans;

    while(index < address.size()){
        if(address[index] == '.'){
            ans = ans + "[.]";
        }else{
            ans = ans + address[index];
        }
        index++;
    }

    cout<<ans<<endl;
}