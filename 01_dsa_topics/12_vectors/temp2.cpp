#include <iostream>
#include <vector>

using namespace std;

int main(){

    // remove values from vector

    vector<int>v = {3,5,7,8,3};    

    // first way
    v.pop_back(); // remove only last element

    // second way
    v.clear(); // remove all the elements

    // third way
    v.erase(v.begin()+2); // remove element at the second index

}