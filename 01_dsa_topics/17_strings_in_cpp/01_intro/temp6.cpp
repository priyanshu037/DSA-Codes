// reverse a string

#include <iostream>
using namespace std;

int main(){
    string s = "Priyanshu";

    int start = 0;
    int end = s.size() - 1;

    while(start<end){
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout<<s<<endl;

    //calculate size without s.size()
    string s2 = "hello";
    int size=0;
    while(s2[size]!='\0'){
        size++;
    }
    cout<<size<<endl;


}