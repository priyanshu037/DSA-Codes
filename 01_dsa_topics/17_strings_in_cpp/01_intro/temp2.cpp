#include <iostream>
using namespace std;

int main(){

    // taking user input to store a string in a character array

    char ch[5];

    for(int i=0; i<5; i++){
        cin>>ch[i]; // apple
    }

    for(int i=0; i<5; i++){
        cout<<ch[i]; // apple
    }
    cout<<endl;

    // user input without knowing the size of the input
    // \0 -> NUll character

    char arr[20];
    cin>>arr; // priyanshu
    cout<<arr<<endl; // priyanshu


    char arr2[10];
    cin>>arr2; // hello
    arr2[2] = '\0';
    cout<<arr2<<endl; // he
}