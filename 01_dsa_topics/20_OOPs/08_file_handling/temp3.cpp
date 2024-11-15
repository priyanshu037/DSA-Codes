#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

    vector<int>v(5);

    cout<<"Enter the input"<<endl;
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    ofstream fout;

    fout.open("text2.txt");

    for(int i=0; i<5; i++){
        fout<<v[i]<<" ";
    }

    fout.close();
}