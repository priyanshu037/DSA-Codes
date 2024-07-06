// break and continue

#include <iostream>
using namespace std;

int main(){
    // break

    int i=1;
    while(i<=10){
        if(i==4){
            break;
        }
        cout<<i<<endl;
        i++;
    }


    // continue

    for(i=1; i<=10; i++){
        if(i%4==0){
            continue;
        }

        cout<<i<<endl;
    }
}