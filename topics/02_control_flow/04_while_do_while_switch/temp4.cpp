// switch statement

#include <iostream>
using namespace std;

int main(){

    int i=4;
    switch (i)
    {
    case 1:
        cout<<"Apple"<<endl;
        break;
    case 2:
        cout<<"Mango"<<endl;
        break;
    default:
        cout<<"Banana"<<endl;
    }

    char name = 'a';

    switch (name)
    {
    case 'a':
        cout<<"Mango"<<endl;
        break;
    case 'b':
        cout<<"Banana"<<endl;
        break;
    case 'c':
        cout<<"Orange"<<endl;
        break;
    case 'd':
        cout<<"Kiwi"<<endl;
        break;
    
    default:
    cout<<"Watermelon"<<endl;
        break;
    }
}