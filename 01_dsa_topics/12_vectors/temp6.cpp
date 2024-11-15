#include <iostream>
#include <vector>

using namespace std;

int main(){

    // sorting

    vector<int>v = {4,6,7,3,5};

    // increasing order
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // decreasing order
    sort(v.begin(), v.end(), greater<int>());
    sort(v.rbegin(), v.rend());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}