#include <iostream>
#include <vector>

using namespace std;

int main(){

    // copy value of one vector into another vector

    vector<int>v = {5,7,8,3};
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>a;
    
    a = v;
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}