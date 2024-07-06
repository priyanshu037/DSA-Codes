// do while loop

#include <iostream>
using namespace std;

int main(){

    int i;


    // print 1 to 10
    i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);

    // sum of n numbers

    int n = 10;
    int sum = 0;
    i=1;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<sum<<endl;

}