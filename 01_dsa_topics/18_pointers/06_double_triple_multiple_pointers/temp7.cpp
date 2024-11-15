// triple pointer
// nth pointer can only contain (n-1)th pointer's address

#include <iostream>
using namespace std;

int main(){

    int n = 10;

    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout<<&ptr1<<endl;
    cout<<ptr2<<endl;

    cout<<&ptr2<<endl;
    cout<<ptr3<<endl;

}