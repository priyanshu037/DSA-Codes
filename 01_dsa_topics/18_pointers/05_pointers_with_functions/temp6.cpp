#include <iostream>
#include <vector>

using namespace std;

void pass(vector<int>&temp){
    for(int i=0; i<5; i++){
        temp[i] = 20;
    }
}

int main(){

    vector<int>v(5,0);

    pass(v);

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

}