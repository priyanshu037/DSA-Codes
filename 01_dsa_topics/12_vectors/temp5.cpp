#include <iostream>
#include <vector>

using namespace std;

int main(){

    

    // iterator in a vector

    vector<int>v = {2,3,6,8,9};

    // begin()
    cout<<*(v.begin())<<endl; // pointing to 1st index

    // end() 
    cout<<*(v.end())<<endl; // pointing to (last + 1th) index 

    for(auto iter=v.begin(); iter!=v.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    // rbegin()
    cout<<*(v.rbegin())<<endl; // pointing to last index

    // rend()
    cout<<*(v.rend())<<endl; // pointing to (first - 1th) index

    
    // another way to print vector

    vector<int>a;
    for(auto i: a){
        cout<<i<<" ";
    }


}