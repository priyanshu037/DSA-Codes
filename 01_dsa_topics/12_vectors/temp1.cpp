#include <iostream>
#include <vector>

using namespace std;

int main(){

    // declare a vector

    vector<int>v;

    // declare a vector with size

    vector<int>v5(4);

    vector<int>v4(4,2);

    // insert value in a vector

    // first way
    vector<int>a;
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);

    // second way
    vector<int>b = {3,5,7,8,9};

    // third way
    int n;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>n;
    vector<int>c;
    for(int i=0; i<n; i++){
        cin>>c[i];
    }

    // forth way
    vector<int>v3 = {1,2,4,5,7,6,8,4};
    v3.erase(v3.begin()+2);

    v3.insert(v3.begin()+2, 3);

    // update value

    vector<int>v2 = {3,5,8,2};
    v[1] = 7;
    v[2] = 9;
    

}