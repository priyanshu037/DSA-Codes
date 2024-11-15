#include <iostream>
using namespace std;

int main(){

    // read space/tab while storing string 
    // getline()
    
    string str;
    getline(cin,str);

    cout<<str<<endl;

    
    // size of a string 

    string s = "Rohit";
    cout<<s.size()<<endl; // 5

    // string append 

    string s1 = "hello ";
    string s2 = "world";

    cout<<s1+s2<<endl; // hello world
    cout<<s1.append(s2)<<endl; // hello world

    // push_back()

    string s3 = "appl";
    s3.push_back('e');
    cout<<s3<<endl; // apple

    // pop_back()
    
    string s4 = "hello";
    s4.pop_back();
    cout<<s4<<endl;
}