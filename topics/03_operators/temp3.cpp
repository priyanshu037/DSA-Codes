#include <iostream>
using namespace std;

// logical operator
/*

&& -> AND
|| -> OR
! -> NOT

either 0 or 1

*/

int main(){
    // AND


    cout<<(0&&0)<<endl; // 0
    cout<<(0&&1)<<endl; // 0
    cout<<(1&&0)<<endl; // 0
    cout<<(1&&1)<<endl; // 1

    int a=9,b=6,c=8;
    if(a>b && a>c){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    // OR

    cout<<(0||0)<<endl; // 0
    cout<<(0||1)<<endl; // 1
    cout<<(1||0)<<endl; // 1
    cout<<(1||1)<<endl; // 1

    char name = 'a';
    if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u'){
        cout<<"Vowel"<<endl;
    }else{
        cout<<"Consonant"<<endl;
    }

    // NOT

    cout<<!0<<endl; // 1
    cout<<!1<<endl; // 0

}