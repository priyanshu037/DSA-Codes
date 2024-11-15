#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream fout;

    fout.open("text3.txt");

    fout<<"Hello\n";
    fout<<"Hello\n";
    fout<<"Hello\n";

    fout.close();

    ifstream fin;

    fin.open("text3.txt");

    string line;

    while(getline(fin, line)){
        cout<<line<<endl;
    }

    fin.close();
}