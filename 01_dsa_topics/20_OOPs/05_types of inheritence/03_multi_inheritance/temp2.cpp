// Whose constructor will be called first

#include <iostream>
using namespace std;

class Engineer{
    public:
    string specilization;

    Engineer(){
        cout<<"Engineer"<<endl;
    }
};

class Youtuber{
    public:
    int subs;

    Youtuber(){
        cout<<"Youtuber"<<endl;
    }
};

class Teacher: public Engineer, public Youtuber{
    public:
    string name;

    Teacher(){
        cout<<"Teacher"<<endl;
    }
};

int main(){

    Teacher A1;

}