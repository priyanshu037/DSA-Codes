// store value in heap variable

#include <iostream>
using namespace std;

int main(){

    // int value

    int *ptr = new int;
    *ptr = 5;

    cout<<*ptr<<endl;

    // float value

    float *ptr2 = new float;
    *ptr2 = 3.5;

    cout<<*ptr2<<endl;

    // array

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int *p = new int[n];

    for(int i=0; i<n; i++){
        p[i] = i+1;
    }

    for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
    }
}