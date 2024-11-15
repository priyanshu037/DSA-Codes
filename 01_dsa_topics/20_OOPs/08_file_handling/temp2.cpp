#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream fin;

    fin.open("text1.txt");

    char c;
    fin>>c;

    c = fin.get(); 

    while(!fin.eof()){
        cout<<c;
        // fin>>c; // it will not read space and tab

        c = fin.get(); // read space and tab also
    }

    fin.close();

}