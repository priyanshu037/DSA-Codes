#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream fout;

    fout.open("text1.txt");

    fout<<"Hello World";

    fout.close();

}