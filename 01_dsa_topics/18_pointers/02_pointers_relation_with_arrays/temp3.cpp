#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6};

    // print values of arr using arr[i]

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    // print values of arr using *(arr+i)

    for(int i=0; i<6; i++){
        cout<<*(arr+i)<<" ";
    }

    cout<<endl;

    // print address of arr using &arr[i]

    for(int i=0; i<6; i++){
        cout<<&arr[i]<<" ";
    }

    cout<<endl;

    // print address of arr using (arr+i)

    for(int i=0; i<6; i++){
        cout<<(arr+i)<<" ";
    }

    cout<<endl;

    return 0;
}