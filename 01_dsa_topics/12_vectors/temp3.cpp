#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int>v = {5,7,8,9,2};
    v.pop_back();

    cout<<v.size()<<endl; // 4 

    cout<<v.capacity()<<endl; // 5

}