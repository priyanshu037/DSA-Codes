#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int>v = {3,5,7,2,6};

    // front()

    cout<<v.front()<<endl;
    cout<<v[0]<<endl;

    // back()

    cout<<v.back()<<endl;
    cout<<v[v.size()-1]<<endl;

    // at()

    // empty()

    cout<<v.empty()<<endl;


}