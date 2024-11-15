// print all the values and addresses of an array using pointer

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int *ptr = arr;

    // print all the addresses using &ptr[i]

    for(int i=0; i<5; i++){
        cout<<&ptr[i]<<" ";
    }
    cout<<endl;

    // print all the addresses using (ptr+i)

    for(int i=0; i<5; i++){
        cout<<(ptr+i)<<" ";
    }
    cout<<endl;

    // print all the value using ptr[i]

    for(int i=0; i<5; i++){
        cout<<ptr[i]<<" ";
    }   
    cout<<endl;

    // print all the value using *(ptr+i)

    for(int i=0; i<5; i++){
        cout<<*(ptr+i)<<" ";
    }
}